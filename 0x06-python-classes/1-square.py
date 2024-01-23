#!/usr/bin/python3

"""a class Square that defines a square by: (based on 0-square.py)."""


class Square:
    """allocates a value to the square."""
    def __init__(self, size):
        """initialize a value to the new square.

        Args:
            size (int): The size fo the new square.
            """

        self.__size = size
