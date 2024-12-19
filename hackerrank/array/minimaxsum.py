#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'miniMaxSum' function below.
#
# The function accepts INTEGER_ARRAY arr as parameter.
#

def miniMaxSum(arr):
    arr = sorted(arr)
    minsum = arr[0] + arr[1] + arr[2] + arr[3]
    maxsum = arr[-1] + arr[-2] + arr[-3] + arr[-4]
    print(f'{minsum} {maxsum}')
if __name__ == '__main__':

    arr = list(map(int, input().rstrip().split()))

    miniMaxSum(arr)
