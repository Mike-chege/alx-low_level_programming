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


def block_sum(grid, rw, clmn):
    """
    Returns the perimeter of a block
    """
    next_block = None
    block_n = 4
    try:
        blck_1 = grid[rw][clmn + 1]
        blck_2 = grid[rw][clmn - 1]
        blck_3 = grid[rw - 1][clmn]
        blck_4 = grid[rw + 1][clmn]

    except ValueError:
        print("Island Not Surrounded By Water")

    block_n += -1 * (blck_1 + blck_2 + blck_3 + blck_4)
    return block_n
