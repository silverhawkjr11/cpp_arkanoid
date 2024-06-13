# Arkanoid Game Project

This project is part of a C++ course designed to showcase various object-oriented programming principles such as inheritance, abstraction, and class relationships. The project is a clone of the classic Arkanoid game, where the player controls a paddle to bounce a ball and break bricks.
the project is on github
https://github.com/silverhawkjr11/cpp_arkanoid.git
## Table of Contents

- [Features](#features)
- [Usage](#usage)
- [Controls](#controls)
- [Project Structure](#project-structure)
- [Class Design](#class-design)
- [Future Work](#future-work)
- [Credits](#credits)

## Features

- Simple and intuitive gameplay.
- Paddle and ball mechanics.
- Brick layout with collision detection.
- Health system.
- Pause and resume functionality.

## Usage

in the build directory, run the following commands:
```shell  make, ./arkanoid```

## Controls

- Move the paddle left and right using the arrow keys.
- Press `P` to pause the game.

project structure

```shell

arkanoid/
├── src/
│   ├── Game.cpp
│   ├── Game.h
│   ├── Paddle.cpp
│   ├── Paddle.h
│   ├── Ball.cpp
│   ├── Ball.h
│   ├── Brick.cpp
│   ├── Brick.h
│   ├── GameObject.h
│   ├── main.cpp
├── arial.ttf
├── CMakeLists.txt
└── README.md


```

## Class Design

```shell

+------------------+
|     Game         |
+------------------+
| - window         |
| - paddle         |
| - ball           |
| - health         |
| - isPaused       |
| - gameObjects    |
| - bricks         |
+------------------+
| + run()          |
| + processEvents()|
| + update()       |
| + render()       |
| + loadLevel()    |
| + checkCollisions() |
| + updateHealth() |
| + togglePause()  |
+------------------+
         |
         |
         v
+------------------+         +------------------+
|   GameObject     | <------ |      Paddle      |
+------------------+         +------------------+
| + update()       |         | + move()         |
| + draw()         |         +------------------+
+------------------+
         |
         |
         v
+------------------+         +------------------+
|      Ball        | <------ |      Brick       |
+------------------+         +------------------+
| + move()         |         | + break()        |
| + bounce()       |         +------------------+
+------------------+

```

## Future Work

The project is not finished and will include the following enhancements:

- Add more levels.
- Abstract class for `Block` to create different types of blocks.
- Abstract class for `Level` to create different levels.
- addition of sound effects.
- additional power-ups.
