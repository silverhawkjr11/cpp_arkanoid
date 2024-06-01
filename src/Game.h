#ifndef GAME_H
#define GAME_H

#include <SFML/Graphics.hpp>
#include "Paddle.h"
#include "Ball.h"
#include "Brick.h"
#include <vector>

class Game {
private:
    sf::RenderWindow window;
    Paddle paddle;
    Ball ball;
    std::vector<Brick> bricks;
    int lives;
    int level;
    int score;
    bool isGameOver;
    bool isMenuActive;
    sf::Font font;
    sf::Text livesText;
    sf::Text scoreText;
    sf::Text gameOverText;
    sf::Text menuText;

    void resetLevel();
    void loadLevel(int level);
    void updateText();
    void handleMenu();

public:
    Game();
    void run();
    void checkCollisions();
    void update();
    void render();
};

#endif
