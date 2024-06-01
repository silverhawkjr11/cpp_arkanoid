#include "Game.h"
#include <iostream>

Game::Game() : window(sf::VideoMode(800, 600), "Arkanoid Game"), paddle(400, 550), ball(400, 300), lives(7), level(1), score(0), isGameOver(false), isMenuActive(false) {
    if (!font.loadFromFile("arial.ttf")) {
        std::cerr << "Could not load font\n";
    }
    livesText.setFont(font);
    livesText.setCharacterSize(24);
    livesText.setFillColor(sf::Color::White);
    livesText.setPosition(10, 10);

    scoreText.setFont(font);
    scoreText.setCharacterSize(24);
    scoreText.setFillColor(sf::Color::White);
    scoreText.setPosition(700, 10);

    gameOverText.setFont(font);
    gameOverText.setCharacterSize(50);
    gameOverText.setFillColor(sf::Color::Red);
    gameOverText.setPosition(200, 300);
    gameOverText.setString("Game Over!");

    menuText.setFont(font);
    menuText.setCharacterSize(30);
    menuText.setFillColor(sf::Color::Yellow);
    menuText.setPosition(250, 250);
    menuText.setString("Press Q to continue\nPress Esc to exit");

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

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Q)) {
            isMenuActive = !isMenuActive;
        }

        if (!isMenuActive) {
            if (!isGameOver) {
                update();
                checkCollisions();
                updateText();
            }
            render();
        } else {
            handleMenu();
        }
    }
}

void Game::loadLevel(int level) {
    bricks.clear();
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
    for (const auto& brick : bricks) {
        if (!brick.getIsDestroyed()) {
            allBricksDestroyed = false;
            break;
        }
    }
    if (allBricksDestroyed) {
        score += 100 * level; // Increase score for completing level
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
    for (const auto& brick : bricks) {
        if (!brick.getIsDestroyed()) {
            window.draw(brick.getShape());
        }
    }
    window.draw(livesText);
    window.draw(scoreText);
    if (isGameOver) {
        window.draw(gameOverText);
    }
    window.display();
}

void Game::updateText() {
    livesText.setString("Lives: " + std::to_string(lives));
    scoreText.setString("Score: " + std::to_string(score));
}

void Game::handleMenu() {
    window.clear();
    window.draw(menuText);
    window.display();
}
