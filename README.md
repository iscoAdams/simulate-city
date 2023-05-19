# Simulate-city

A simulation city project created using OpenGL, Glut and C++.

![a screenshot for the window](screenshot.png)

## Description

This project simulates a city environment with various elements such as buildings, houses, trees, dark sky with some stars and for sure roads. It serves as a simple demonstration of the capabilities of OpenGL and Glut libraries.

## Features

- Buildings and houses with different designs
- Roads and intersections
- observed transformations using built-in functions

## Prerequisites

- OpenGL library
- Glut library
- C++ compiler (e.g., GCC)

## Getting Started

1. Clone the repository:

   ```bash
   git clone https://github.com/iscoAdams/simulate-city.git

   ```

2. Compile the project:

- Configure your compiler to include OpenGL and Glut libraries.

- Set the appropriate environment variables.

- Compile the project using the following command:

```bash
    g++ main.cpp -lGL -lGLU -lglut
```

### Alternatively, you can do the following:

1. configure your compiler to include openGl and Glut libraries, in my case i used apt-get to install the necessary libraries.
2. add a launch configration of the preferred compiler to the .vscode/launch.json file:
3. create tasks.json and add the following lines to .vscode/tasks.json file:

```json
{
  "tasks": [
    {
      "type": "cppbuild",
      "label": "C/C++: g++ build active file",
      "command": "/usr/bin/g++",
      "args": [
        "-g",
        "${file}",
        "-o",
        "${fileDirname}/${fileBasenameNoExtension}",
        "-lGLU",
        "-lglfw",
        "-lGLEW",
        "-lGL",
        "-lglut"
      ],
      "options": {
        "cwd": "${workspaceFolder}"
      },
      "problemMatcher": ["$gcc"],
      "group": {
        "kind": "build",
        "isDefault": true
      },
      "detail": "Task generated by Debugger."
    }
  ],
  "version": "2.0.0"
}
```

3. Run the simulation:

```bash
    ./a.out
```

4. to enjoy the simulation, you can play with the following keys:

- 'w' to move forward
- 's' to move backward
- 'a' to move left
- 'd' to move right
- 'q' to rotate left
- 'e' to rotate right
- right click to move up
- left click to move down
- 'r' to reset the camera
- 'z' to exit

## contributors

- Yassa-Alqess
- Mark-bahaa
- Kero-magdy
- Kareem-salama
- Nancy-khaled


## Copyright and Credits
This project includes code or ideas inspired by the work of [tars400](https://github.com/tars400/3Dcity-in-OpenGL). I would like to acknowledge their contributions and express my gratitude for their valuable work.

