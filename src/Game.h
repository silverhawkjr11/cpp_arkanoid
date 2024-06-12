#ifndef GAME_H
#define GAME_H

#include <SFML/Graphics.hpp>
#include "Paddle.h"
#include "Ball.h"
#include "Brick.h"
#include "GameObject.h"
#include <vector>

class Game {
private:
    sf::RenderWindow window;
    Paddle paddle;
    Ball ball;  // Declare ball here
    std::vector<Brick> bricks;
    std::vector<GameObject*> gameObjects;
    sf::Text healthText;
    sf::Font font;
    int health;
    bool isPaused;

public:
    Game();
    void run();
    void processEvents();
    void update();
    void render();
    void loadLevel();
    void checkCollisions();
    void updateHealth();
    void togglePause();
};

#endif // GAME_H
