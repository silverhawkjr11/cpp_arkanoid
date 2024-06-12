#ifndef BRICK_H
#define BRICK_H

#include <SFML/Graphics.hpp>
#include "GameObject.h"

class Brick : public GameObject {
private:
    sf::RectangleShape shape;
public:
    Brick(float startX, float startY);
    void update() override;
    void draw(sf::RenderTarget& target, sf::RenderStates states) const override;
    sf::Vector2f getPosition() const;
    sf::Vector2f getSize() const;
};

#endif // BRICK_H
