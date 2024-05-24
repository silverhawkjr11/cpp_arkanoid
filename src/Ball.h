
// Ball.h
#ifndef BALL_H
#define BALL_H

#include <SFML/Graphics.hpp>

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
  void reboundBat();
  void reboundTop();
  void hitBottom();
};

#endif
