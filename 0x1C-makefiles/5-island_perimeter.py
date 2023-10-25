#!/usr/bin/python3
"""Defines an island perimeter measuring function."""


def island_perimeter(grid):
    """
    Returns the perimeter of the island described in grid.
    Args:
        grid (List[List[int]]): A list of lists representing the grid.
    Returns:
        int: The perimeter of the island.
    """
    rows = len(grid[0])
    cols = len(grid)
    perimeter = 0
    size = 0

    for col in range(cols):
        for row in range(rows):
            if grid[col][row] == 1:
                size += 1
                if (row > 0 and grid[col][row - 1] == 1):
                    perimeter += 1
                if (col > 0 and grid[col - 1][row] == 1):
                    perimeter += 1
    return size * 4 - perimeter * 2
