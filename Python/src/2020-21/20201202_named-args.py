# Copyright © 2020 Giovanni Squillero <giovanni.squillero@polito.it>
# Free for personal or classroom use; see 'LICENSE.md' for details.
# https://github.com/squillero/computer-sciences


def foo(day, month):
    print(f"Hey, day={day} and month={month}")


def main():
    foo(23, 10)
    foo(day=23, month=10)
    foo(month=10, day=23)


if __name__ == '__main__':
    main()
