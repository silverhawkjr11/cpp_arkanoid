
#include "Paddle.h"

Paddle::Paddle(float startX, float startY) {
  paddle.setSize(sf::Vector2f(100, 20));
  paddle.setPosition(startX, startY);
  speed = 0.3;
}

sf::RectangleShape Paddle::getShape() { return paddle; }

void Paddle::moveLeft() {
  if (paddle.getPosition().x > 0) {
    paddle.move(-speed, 0);
  }
}

void Paddle::moveRight() {
  if (paddle.getPosition().x + paddle.getSize().x < 800) {
    paddle.move(speed, 0);
  }
}

void Paddle::update() {
  if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
    moveLeft();
  }
  if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
    moveRight();
  }
}
