#!/usr/bin/python3

def island_perimeter(grid):
    """A function that returns the perimeter of the island
        described in grid
    """

    perimeter = 0
    if grid is None or grid[0] is None:
        return 0
    else:
        adjacents = [(-1, 0), (1, 0), (0, -1), (0, 1)]
        for i in range(len(grid)):
            for j in range(len(grid[0])):
                if grid[i][j] == 0:
                    continue
                origin = 4
                for adj in adjacents:
                    x_axis = i + adj[0]
                    y_axis = j + adj[1]
                    if 0 < x_axis < len(grid) and 0 < y_axis < len(grid[i]) and\
                       grid[x_axis][y_axis] == 1:
                        origin -= 1
                perimeter += origin

        return perimeter
