#!/usr/bin/python3
"""
perimeter of a defined island grid
"""


def island_perimeter(grid):
    """
    calculates perimeter of island based on set conditions of grid
    and returns said perimeter. List of lists of ints with 1 being
    land and 0 being water. One island possible, no lakes
    """
    if type(grid) is not list or type(grid[0]) is not list:
        return [[]]

    perimeter = 0
    for i in range(len(grid)):
        for k in range(len(grid[i])):
            if type(grid[i][k]) is not int:
                return
            if grid[i][k] is 1:
                if i is 0 or grid[i - 1][k] is 0:
                    perimeter += 1
                if k is 0 or grid[i][k - 1] is 0:
                    perimeter += 1
                if k + 1 is len(grid[i]) or grid[i][k + 1] is 0:
                    perimeter += 1
                if i + 1 is len(grid) or grid[i + 1][k] is 0:
                    perimeter += 1
    return perimeter
