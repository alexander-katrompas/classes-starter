# Classes and Objects Demonstration (C++)

A small C\+\+ project demonstrating:
- Basic class design (constructors, accessors, mutators)
- Inheritance (`Box` derives from `Rectangle`)
- Method overriding (`Box::getArea()` returns surface area)
- Passing objects by reference via pointers in simple display functions

## Project structure

- `main.cpp` / `main.h`: application entry point and includes
- `rectangle.h` / `rectangle.cpp`: `Rectangle` class (width, height, area)
- `box.h` / `box.cpp`: `Box` class (width, height, depth, volume, surface area)
- `functions.h` / `functions.cpp`: printing helpers for `Rectangle` and `Box`
- `README.md`: this file

## Build and run (Linux)

From the project directory:

```bash
g++ -I ./ *.cpp
./a.out
```