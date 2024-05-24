
#include "Ball.h"
#include "Paddle.h"
#include <SFML/Graphics.hpp>

int main() {
  sf::RenderWindow window(sf::VideoMode(800, 600), "Arkanoid Game");
  Paddle paddle(400, 550);
  Ball ball(400, 300);

  while (window.isOpen()) {
    sf::Event event;
    while (window.pollEvent(event)) {
      if (event.type == sf::Event::Closed) {
        window.close();
      }
    }

    paddle.update();
    ball.update();

    window.clear();
    window.draw(paddle.getShape());
    window.draw(ball.getShape());
    window.display();
  }

  return 0;
}
