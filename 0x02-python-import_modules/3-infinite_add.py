#!/usr/bin/python3

if __name__ == "__main__":
    from sys import argv
    addition = 0
    for args in range(1, len(argv)):
        addition = addition + int(argv[args])
    print("{:d}".format(addition))
