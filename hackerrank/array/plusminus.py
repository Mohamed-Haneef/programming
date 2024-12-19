#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'plusMinus' function below.
#
# The function accepts INTEGER_ARRAY arr as parameter.
#

def plusMinus(arr):
    pos=0
    neg=0
    zer=0
    arr_size = len(arr)
    for i in arr:
        if i>0: 
            pos = pos + 1
        elif i == 0:
            zer = zer + 1
        elif i<0:
            neg = neg + 1
 
    print("{:.6f}".format(pos/arr_size))
    print("{:.6f}".format(neg/arr_size))
    print("{:.6f}".format(zer/arr_size))

        

if __name__ == '__main__':
    n = int(input().strip())

    arr = list(map(int, input().rstrip().split()))

    plusMinus(arr)
