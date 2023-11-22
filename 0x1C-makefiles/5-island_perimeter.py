#!/usr/bin/python3
"""5-island_perimeter"""

def island_perimeter(grid):
    """Calculates the perimeter of the island described in grid."""

    perimeter = 0

    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                # Check left neighbor
                if j == 0 or grid[i][j-1] == 0:
                    perimeter += 1
                # Check right neighbor
                if j == len(grid[0]) - 1 or grid[i][j+1] == 0:
                    perimeter += 1
                # Check top neighbor
                if i == 0 or grid[i-1][j] == 0:
                    perimeter += 1
                # Check bottom neighbor
                if i == len(grid) - 1 or grid[i+1][j] == 0:
                    perimeter += 1

    return perimeter
