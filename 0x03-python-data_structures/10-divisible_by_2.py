#!/usr/bin/python3

def divisible_by_2(my_list=[]):
    true_false_list = []
    for num in (my_list):
        if num % 2 == 0:
            true_false_list.append(True)
        else:
            true_false_list.append(False)
    return true_false_list
