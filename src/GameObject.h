
#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include <SFML/Graphics.hpp>

class GameObject : public sf::Drawable {
public:
  virtual void update() = 0;
};

#endif // GAMEOBJECT_H
