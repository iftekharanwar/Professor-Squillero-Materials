# Copyright © 2020 Giovanni Squillero <giovanni.squillero@polito.it>
# Free for personal or classroom use; see 'LICENSE.md' for details.
# https://github.com/squillero/computer-sciences


def main():
    file = open("duck.txt", "r")
    line = file.readline()
    line = file.readline()
    while line != '':
        print(f"LINE: <<<{line[:-1]}>>>")
        line = file.readline()
    file = ""
    file.close()


if __name__ == '__main__':
    main()
