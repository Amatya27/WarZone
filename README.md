# War Zone

A small C++ graphics game from my first year of engineering (2020). You fly the blue plane, red enemy planes come at you across the screen, and you dodge them with the keyboard. It's built on **simplecpp**, IIT Bombay's turtle-graphics library for teaching C++.

## How to play

```
w  up        s  down
a  back      d  forward
x  exit (shows a smiley "Hope you Enjoyed the Game!" screen)
```

The game prints the rules, asks if you're ready, shows a loading bar and then reads one command at a time. Every move you make also moves the incoming planes.

## How it's built

- `planeShape` is a `Polygon` subclass. The plane outline is 12 points, scaled 2x and filled.
- One player plane (blue) and three enemies (red), each placed with turtle moves (`forward`, `left`, `right`).
- The battle area is a `Rectangle` and the target is a filled `Circle`.
- The exit screen draws the smiley with BGI graphics (`circle`, `floodfill`, `fillellipse`).

## Running it

You need simplecpp (it ships with its own `s++` compiler wrapper):

```bash
s++ trial.cpp -o warzone
./warzone
```

The exit screen uses Turbo C's BGI `graphics.h`, so that part only builds with a BGI-compatible setup such as WinBGIm.

**Updated in 2026:** removed the prebuilt `trial.exe` from the repo. Compiled binaries don't belong in source control, and it only ran on Windows anyway.
