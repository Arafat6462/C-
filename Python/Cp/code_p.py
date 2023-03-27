

import sys

sys.stdout = open("output_p.txt", "w")
sys.stdin = open("input_p.txt", "r")
sys.stderr = open("error_p.txt", "w")


nemo = ['nemo']


def findNemo(array):
    for i in range(len(array)):
        if array[i] == 'nemo':
            print('Found NEMO')


findNemo(nemo)
