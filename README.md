# Snake-Game-in-Cpp
Snake game in C++ - the snake moves, eats food, and grows while avoiding collisions. Designed for beginners, the code is clear, well-commented, and uses basic C++ concepts. Perfect for learning game development basics.

# [Snake Game]

## Description
A simple Snake game where the player controls a snake to eat food and grow, avoiding collisions with walls and itself. Score increases with each food eaten.

## Rules
- Start at the grid center and move with arrow keys.
- Eat food to grow and gain points.
- Game ends if the snake hits the walls or itself.
- Cannot reverse direction (e.g., up then down).
- Quit with 'q'.

## Data Structures

### Snake
- **Role**: Manages the snake's position, length, and movement.
- **Components**: `x_pos`, `y_pos` (head position), `length`, `x_body`, `y_body` (body segments), `max_length`, `direction` (UP, DOWN, LEFT, RIGHT).

### Food
- **Role**: Provides food for the snake to eat.
- **Components**: `x_pos`, `y_pos` (position), `score` (points).

### Grid
- **Role**: Defines the game boundaries.
- **Components**: `width`, `height` (grid size).