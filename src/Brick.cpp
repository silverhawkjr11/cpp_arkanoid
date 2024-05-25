#include "Brick.h"

Brick::Brick(float startX, float startY) : isDestroyed(false) {
    brick.setSize(sf::Vector2f(60, 20)); // Set brick size
    brick.setFillColor(sf::Color::Red); // Set brick color
    brick.setPosition(startX, startY);
}

sf::RectangleShape Brick::getShape() const { // Reflect the const-ness here
    return brick;
}

bool Brick::getIsDestroyed() const {
    return isDestroyed;
}

void Brick::destroy() {
    isDestroyed = true;
    brick.setFillColor(sf::Color::Transparent); // Make brick invisible
}
