# Copyright © 2020 Giovanni Squillero <giovanni.squillero@polito.it>
# Free for personal or classroom use; see 'LICENSE.md' for details.
# https://github.com/squillero/computer-sciences


def main():
    """Entry point"""
    foo()
    bar()
    baz()  # Error!


def foo():
    print("I'm Foo!")

    def baz():
        print("I'm Baz...")

    baz()


def bar():
    print("I'm Bar!")


if __name__ == '__main__':
    main()
