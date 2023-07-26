#!/usr/bin/python3
"""
Returns the perimeter of
An island described in a grid
"""


def island_perimeter(grid):
    """
    Returns the perimeter of the island
    """
    row = len(grid[0])
    column = len(grid)
    edges = 0
    perimeter = 0

    for i in range(column):
        for j in range(row):
            if grid[i][j] == 1:
                perimeter += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edges += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edges += 1
    return perimeter * 4 - edges * 2
