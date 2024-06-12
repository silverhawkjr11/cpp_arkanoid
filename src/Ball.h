#ifndef BALL_H
#define BALL_H

#include <SFML/Graphics.hpp>
#include "GameObject.h"

class Ball : public GameObject {
private:
    sf::CircleShape shape;
    float velocityX;
    float velocityY;
public:
    Ball(float startX, float startY);
    void update() override;
    void draw(sf::RenderTarget& target, sf::RenderStates states) const override;
    sf::Vector2f getPosition() const;
    void reset();
    float getRadius() const;
    void reverseY();
};

#endif // BALL_H
