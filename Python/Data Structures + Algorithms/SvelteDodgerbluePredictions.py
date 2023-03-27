

import sys

sys.stdout = open("../In-out-error/output_p.txt", "w")
sys.stdin = open("../In-out-error/input_p.txt", "r")
sys.stderr = open("../In-out-error/error_p.txt", "w")


def funChallenge(input):
    a = 10  # O(1)
    a = 50 + 3  # O(1)

    for i in range(input):  # O(n)
        anotherFunction()  # O(n)
        stranger = True  # O(n)
        a = a + 1  # O(n)
    return a  # O(1)


funChallenge(5)

# O(1)+O(1)+O(n)+O(n)+O(n)+O(n)+O(1)
# BIG O(3 + 4n)
# O(n) (max one will count)