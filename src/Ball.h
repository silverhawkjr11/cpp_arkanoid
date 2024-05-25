#ifndef BALL_H
#define BALL_H

#include <SFML/Graphics.hpp>
#include <vector>

// Forward declaration of Brick class
class Brick;

class Ball {
private:
    sf::CircleShape ball;
    float speedX, speedY;

public:
    Ball(float startX, float startY);
    ~Ball() {}

    sf::CircleShape getShape();
    void update();
    void reboundSides();
    void reboundPaddle();
    void reboundTop();
    void hitBottom();
    void checkCollisionWithPaddle(const sf::RectangleShape& paddle);
    void checkCollisionWithBricks(std::vector<Brick>& bricks);
};

#endif
