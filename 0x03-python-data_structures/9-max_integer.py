#!/usr/bin/python3

def max_integer(my_list=[]):
    if len(my_list) == 0:
        return (None)
    max_value = my_list[0]
    for elem in range(len(my_list)):
        if my_list[elem] > max_value:
            max_value = my_list[elem]

    return (max_value)
