#!/usr/bin/python3

if __name__ == "__main__":
    import hidden_4
    attributes = dir(hidden_4)
    for name in attributes:
        if name[:2] != "__":
            print("{}".format(name))
