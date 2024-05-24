#include "Ball.h"

Ball::Ball(float startX, float startY) {
    ball.setRadius(10);
    ball.setPosition(startX, startY);
    speedX = 6.0f;
    speedY = 6.0f;
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

void Ball::reboundBat() {
    speedY = -speedY;
}

void Ball::reboundTop() {
    speedY = -speedY;
}

void Ball::hitBottom() {
    // Handle ball hitting the bottom of the screen
}
