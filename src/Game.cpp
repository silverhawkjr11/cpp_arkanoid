#include "Game.h"
#include <iostream> // For debugging
#include <filesystem> // For std::filesystem::current_path
#include <cstdlib> // For exit

Game::Game()
    : window(sf::VideoMode(800, 600), "Arkanoid"), paddle(), ball(400, 300),
      health(110), isPaused(false) {
  if (!font.loadFromFile("./arial.ttf")) {
    std::cerr << "Failed to load font! Please make sure 'arial.ttf' is in the correct directory." << std::endl;
    std::cerr << "Current working directory: " << std::filesystem::current_path() << std::endl;
    // Handle error, possibly exit the program
    exit(1); // Exit with a non-zero status to indicate failure
  }
  healthText.setFont(font);
  healthText.setCharacterSize(24);
  healthText.setFillColor(sf::Color::White);
  healthText.setPosition(10, 10);
  updateHealth();

  gameObjects.push_back(&paddle);
  gameObjects.push_back(&ball);

  loadLevel();
}

void Game::run() {
  while (window.isOpen()) {
    processEvents();
    if (!isPaused) {
      update();
    }
    render();
  }
}

void Game::processEvents() {
  sf::Event event;
  while (window.pollEvent(event)) {
    if (event.type == sf::Event::Closed)
      window.close();
    if (event.type == sf::Event::KeyPressed) {
      if (event.key.code == sf::Keyboard::P) {
        togglePause();
      }
    }
  }
}

void Game::update() {
  for (auto obj : gameObjects) {
    obj->update();
  }
  checkCollisions();
}

void Game::render() {
  window.clear();
  for (auto obj : gameObjects) {
    window.draw(*obj);
  }
  for (auto &brick : bricks) {
    window.draw(brick);
  }
  window.draw(healthText);
  window.display();
}

void Game::loadLevel() {
  // Create bricks
  for (int i = 0; i < 5; ++i) {
    for (int j = 0; j < 10; ++j) {
      bricks.push_back(Brick(50 + j * 60, 50 + i * 30));
    }
  }
}

void Game::checkCollisions() {
  // Check collision between ball and paddle
  if (ball.getPosition().x < paddle.getPosition().x + paddle.getSize().x &&
      ball.getPosition().x + ball.getRadius() * 2 > paddle.getPosition().x &&
      ball.getPosition().y < paddle.getPosition().y + paddle.getSize().y &&
      ball.getPosition().y + ball.getRadius() * 2 > paddle.getPosition().y) {
    ball.reverseY();
  }

  // Check collision between ball and bricks
  for (auto it = bricks.begin(); it != bricks.end();) {
    if (ball.getPosition().x < it->getPosition().x + it->getSize().x &&
        ball.getPosition().x + ball.getRadius() * 2 > it->getPosition().x &&
        ball.getPosition().y < it->getPosition().y + it->getSize().y &&
        ball.getPosition().y + ball.getRadius() * 2 > it->getPosition().y) {
      ball.reverseY();
      it = bricks.erase(it);
    } else {
      ++it;
    }
  }

  // Check if the ball is out of the window (below the paddle)
  if (ball.getPosition().y > window.getSize().y) {
    health--;
    updateHealth();
    if (health <= 0) {
      // Handle game over
      // For now, just reset the ball and paddle
      exit(0);
    } else {
      ball.reset();
      paddle.reset();
    }
  }

  // if all bricks are destroyed, load the next level
  if (bricks.empty()) {
    loadLevel();
  }
}

void Game::updateHealth() {
  healthText.setString("Health: " + std::to_string(health));
}

void Game::togglePause() {
  isPaused = !isPaused;
}
