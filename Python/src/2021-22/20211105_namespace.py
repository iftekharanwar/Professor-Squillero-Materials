# Copyright © 2021 Giovanni Squillero <giovanni.squillero@polito.it>
# Free for personal or classroom use; see 'LICENSE.md' for details.
# https://github.com/squillero/computer-sciences

def foo(x, y):
    x += 1
    y += 10


def main():
    x = 23
    y = 10
    foo(x, y)
    print(f"{x}-{y}")


main()
