#!/usr/bin/python3

def safe_print_list(my_list=[], x=0):
    """Write a function that prints x elements of a list.

    Args:
        my_list (list): The list to print elements from
        x (int): the number of elements of my_list to print

    Return:
        The number of elements printed. """

    integer = 0
    for i in range(x):
        try:
            print("{}".format(my_list[i]), end="")
            integer += 1
        except IndexError:
            break
    print("")
    return (integer)
