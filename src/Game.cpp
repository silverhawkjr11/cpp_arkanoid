
#include "Game.h"
#include <iostream>

Game::Game()
    : window(sf::VideoMode(800, 600), "Arkanoid Game"), paddle(400, 550),
      ball(400, 300), lives(3), level(1), isGameOver(false) {
  loadLevel(level);
}

void Game::run() {
  while (window.isOpen()) {
    sf::Event event;
    while (window.pollEvent(event)) {
      if (event.type == sf::Event::Closed) {
        window.close();
      }
    }

    if (!isGameOver) {
      update();
      checkCollisions();
      render();
    }
  }
}

void Game::loadLevel(int level) {
  bricks.clear();
  // Example of creating a grid of bricks; you can create more complex level
  // designs here
  for (int i = 0; i < 5; ++i) {
    for (int j = 0; j < 10; ++j) {
      bricks.emplace_back(60 * j + 50, 30 * i + 50);
    }
  }
}

void Game::resetLevel() {
  ball = Ball(400, 300);
  paddle = Paddle(400, 550);
  loadLevel(level);
}

void Game::checkCollisions() {
  ball.checkCollisionWithPaddle(paddle.getShape());
  ball.checkCollisionWithBricks(bricks);

  // Check if ball hit the bottom
  if (ball.getShape().getPosition().y + ball.getShape().getRadius() * 2 > 600) {
    lives--;
    if (lives <= 0) {
      isGameOver = true;
    } else {
      resetLevel();
    }
  }

  // Check if all bricks are destroyed
  bool allBricksDestroyed = true;
  for (const auto &brick : bricks) {
    if (!brick.getIsDestroyed()) {
      allBricksDestroyed = false;
      break;
    }
  }
  if (allBricksDestroyed) {
    level++;
    resetLevel();
  }
}

void Game::update() {
  paddle.update();
  ball.update();
}

void Game::render() {
  window.clear();
  window.draw(paddle.getShape());
  window.draw(ball.getShape());
  for (const auto &brick : bricks) {
    if (!brick.getIsDestroyed()) {
      window.draw(brick.getShape());
    }
  }
  window.display();
}
