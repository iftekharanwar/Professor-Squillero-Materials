# Copyright © 2020 Giovanni Squillero <giovanni.squillero@polito.it>
# Free for personal or classroom use; see 'LICENSE.md' for details.
# https://github.com/squillero/computer-sciences


def main():
    """Main entry point"""
    foo = list("Giovanni Adolfo Pietro Pio Squillero")
    pos = my_index(foo, "i")
    print(pos)


def my_index(list_, element):
    """Returns a list with all the positions of element in list_"""
    pos = []
    for i, e in enumerate(list_):
        if e == element:
            pos.append(i)
    return pos


if __name__ == '__main__':  # BLACK MAGIC!
    main()
