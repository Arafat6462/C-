

import sys
import time

sys.stdout = open("../In-out-error/output_p.txt", "w")
sys.stdin = open("../In-out-error/input_p.txt", "r")
sys.stderr = open("../In-out-error/error_p.txt", "w")

nemo = ['nemo']
everyone = ['dory', 'nemo', 'Arafat', 'saki',
            'biddendu', 'Afsana', 'Durjoy', 'Atik']
largeArray = ['nemo' for i in range(500)]

t0 = time.time()


def findNemo(array):
    for i in range(len(array)):  # O(n)
        if array[i] == 'nemo':  # O(n)
            print(f'Found "NEMO"')  # O(1)


t1 = time.time()

findNemo(largeArray)  # O(n)-->n = 1,10,100,anything --> Linear Time
print(f'Call to fine Nemo took {(t1-t0)*1000} milliseconds')
