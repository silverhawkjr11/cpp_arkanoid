#include "Brick.h"

Brick::Brick(float startX, float startY) {
    shape.setSize(sf::Vector2f(50, 20));
    shape.setFillColor(sf::Color::Green);
    shape.setPosition(startX, startY);
}

void Brick::update() {
    // Brick does not need to update for now
}

void Brick::draw(sf::RenderTarget& target, sf::RenderStates states) const {
    target.draw(shape, states);
}

sf::Vector2f Brick::getPosition() const {
    return shape.getPosition();
}

sf::Vector2f Brick::getSize() const {
    return shape.getSize();
}
