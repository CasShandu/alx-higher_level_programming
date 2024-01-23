#!/usr/bin/python3

"""a class Square that defines a square by: (based on 2-square.py)"""


class Square:
    """denotes a square"""
    def __init__(self, size=0):
        """initialize a square

        Args:
            size (int): the size of the square."""
        if not isinstance(size, int):
            raise TypeError("size must be an integer")
        elif size < 0:
            raise ValueError("size must be >= 0")
        self.__size = size

    def area(self):
        return (self.__size * self.__size)
