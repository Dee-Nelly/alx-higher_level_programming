#!/usr/bin/python3

def roman_to_int(roman_string):
    if roman_string is None or type(roman_string) is not str:
        return (0)
    r_dict = {'M': 1000, 'D': 500, 'C': 100, 'L': 50, 'X': 10, 'V': 5, 'I': 1}
    sum = 0
    for i in range(len(roman_string)):
        num = r_dict[roman_string[i]]
        if i + 1 < len(roman_string) and r_dict[roman_string[i + 1]] > num:
            sum -= num
        else:
            sum += num
    return sum
