#include "Paddle.h"

Paddle::Paddle() {
  shape.setSize(sf::Vector2f(100, 20));
  shape.setFillColor(sf::Color::Red);
  shape.setPosition(350, 550);
}

void Paddle::update() {
  float moveSpeed = 0.1; // Adjust this value for better control
  if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left) &&
      shape.getPosition().x > 0) {
    shape.move(-moveSpeed, 0);
  }
  if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right) &&
      shape.getPosition().x + shape.getSize().x < 800) {
    shape.move(moveSpeed, 0);
  }
}

void Paddle::draw(sf::RenderTarget &target, sf::RenderStates states) const {
  target.draw(shape, states);
}

void Paddle::reset() { shape.setPosition(350, 550); }

sf::Vector2f Paddle::getPosition() const { return shape.getPosition(); }

sf::Vector2f Paddle::getSize() const { return shape.getSize(); }
