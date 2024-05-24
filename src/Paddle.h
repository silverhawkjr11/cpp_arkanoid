
#ifndef PADDLE_H
#define PADDLE_H

#include <SFML/Graphics.hpp>

class Paddle {
private:
  sf::RectangleShape paddle;
  float speed;

public:
  Paddle(float startX, float startY);
  ~Paddle() {}
  sf::RectangleShape getShape();
  void moveLeft();
  void moveRight();
  void update();
};

#endif
