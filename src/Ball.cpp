#include "Ball.h"

Ball::Ball(float startX, float startY)
    : velocityX(0.1), velocityY(0.1) { // Reduced speed
  shape.setRadius(10);
  shape.setFillColor(sf::Color::White);
  shape.setPosition(startX, startY);
}

void Ball::update() {
  shape.move(velocityX, velocityY);

  if (shape.getPosition().x <= 0 ||
      shape.getPosition().x + shape.getRadius() * 2 >= 800) {
    velocityX = -velocityX;
  }
  if (shape.getPosition().y <= 0) {
    velocityY = -velocityY;
  }
}

void Ball::draw(sf::RenderTarget &target, sf::RenderStates states) const {
  target.draw(shape, states);
}

sf::Vector2f Ball::getPosition() const { return shape.getPosition(); }

void Ball::reset() {
  shape.setPosition(400, 300);
  // velocityX = 2.5; // Reduced speed
  // velocityY = 2.5; // Reduced speed
}

float Ball::getRadius() const { return shape.getRadius(); }

void Ball::reverseY() { velocityY = -velocityY; }
