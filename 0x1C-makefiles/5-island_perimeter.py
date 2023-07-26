#!/usr/bin/python3
"""
This function returns the perimeter of
An island described in grid(list of integers)
"""


def island_perimeter(grid):
    """
    Returns the perimeter of the island
    """
    if not isinstance(grid, list):
        return 0
    island = 0
    for row_j, row in enumerate(grid):
        if not isinstance(row, list):
            return 0
        for column, block in enumerate(row):
            if type(block) is not int:
                return 0
            if block == 1:
                island += block_sum(grid, row_j, column)
    return island


def block_sum(grid, row, column):
    """
    Returns the perimeter of a block
    """
    next_block = None
    block= 4
    try:
        blck_1 = grid[row][column + 1]
        blck_2 = grid[row][column - 1]
        blck_3 = grid[row - 1][column]
        blck_4 = grid[row + 1][column]

    except ValueError:
        print("Island Not Surrounded BY Water")

    block += -1 * (blck_1 + blck_2 + blck_3 + blck_4)
    return block
