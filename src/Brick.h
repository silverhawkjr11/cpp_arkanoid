#ifndef BRICK_H
#define BRICK_H

#include <SFML/Graphics.hpp>

class Brick {
private:
    sf::RectangleShape brick;
    bool isDestroyed;

public:
    Brick(float startX, float startY);
    ~Brick() {}

    sf::RectangleShape getShape() const; // Make getShape() a const method
    bool getIsDestroyed() const;
    void destroy();
};

#endif
