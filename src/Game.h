
#ifndef GAME_H
#define GAME_H

#include "Ball.h"
#include "Brick.h"
#include "Paddle.h"
#include <SFML/Graphics.hpp>
#include <vector>

class Game {
private:
  sf::RenderWindow window;
  Paddle paddle;
  Ball ball;
  std::vector<Brick> bricks;
  int lives;
  int level;
  bool isGameOver;

  void resetLevel();
  void loadLevel(int level);

public:
  Game();
  void run();
  void checkCollisions();
  void update();
  void render();
};

#endif
