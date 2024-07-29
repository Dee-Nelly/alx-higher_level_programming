#!/usr/bin/python3

def no_c(my_string):
    new_str = ''
    for elem in my_string:
        if elem != 'c' and elem != 'C':
            new_str += elem
    return (new_str)
