#ifndef PADDLE_H
#define PADDLE_H

#include <SFML/Graphics.hpp>
#include "GameObject.h"

class Paddle : public GameObject {
private:
    sf::RectangleShape shape;
public:
    Paddle();
    void update() override;
    void draw(sf::RenderTarget& target, sf::RenderStates states) const override;
    void reset();
    sf::Vector2f getPosition() const;
    sf::Vector2f getSize() const;
};

#endif // PADDLE_H
