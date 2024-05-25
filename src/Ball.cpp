#include "Ball.h"
#include <iostream>
#include "Brick.h"

Ball::Ball(float startX, float startY) {
    ball.setRadius(10);
    ball.setFillColor(sf::Color::White);
    ball.setPosition(startX, startY);
    speedX = 0.2;
    speedY = 0.2;
}

sf::CircleShape Ball::getShape() {
    return ball;
}

void Ball::update() {
    ball.move(speedX, speedY);

    if (ball.getPosition().x < 0 || ball.getPosition().x + ball.getRadius() * 2 > 800) { // Assuming window width is 800
        reboundSides();
    }

    if (ball.getPosition().y < 0) {
        reboundTop();
    }

    if (ball.getPosition().y + ball.getRadius() * 2 > 600) { // Assuming window height is 600
        hitBottom();
    }
}

void Ball::reboundSides() {
    speedX = -speedX;
}

void Ball::reboundPaddle() {
    speedY = -speedY;
}

void Ball::reboundTop() {
    speedY = -speedY;
}

void Ball::hitBottom() {
    // Handle ball hitting the bottom of the screen, e.g., reset position
    ball.setPosition(400, 300);
    speedY = -speedY; // Reverse the direction for simplicity
}

void Ball::checkCollisionWithPaddle(const sf::RectangleShape& paddle) {
    if (ball.getGlobalBounds().intersects(paddle.getGlobalBounds())) {
        reboundPaddle();
    }
}

void Ball::checkCollisionWithBricks(std::vector<Brick>& bricks) {
    for (auto& brick : bricks) {
        if (!brick.getIsDestroyed() && ball.getGlobalBounds().intersects(brick.getShape().getGlobalBounds())) {
            brick.destroy();
            reboundPaddle(); // Assuming same behavior as hitting paddle
        }
    }
}
