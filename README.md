# FdF
3D-wireframe map renderer.
Parsing input file for coordinates of nodes and colors(optional) and building 3D-wireframe.
MiniLibX and own libft libraries were used to make this project.

![screenshot](screenshot.png?raw=true)

## Features
* Movement: mouse left key
* Zoom:   mouse wheel
* Z-axis scale: arrows up, down
* Rotation on keys:
  - X axis - QW
  - Y axis - ER
  - Z axis - TY
* Different projection:
  - Parallel - O
  - Isometric - I
  - Perspective - P (+- to change distance)
* Different color modes: 
  - Parsed from file
  - Custom, altering with height
* Colorize by Z-coord: C
* Blur mode: S
* Auto-refresh mode: A
* Reset settings: 0
 
 ## Instructions
- Run `make` to make binary file or `make re` to recompile.
- Sample files located at "maps" directory.
- Execute as `./fdf maps/42.fdf`
