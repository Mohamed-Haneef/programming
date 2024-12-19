#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'timeConversion' function below.
#
# The function is expected to return a STRING.
# The function accepts STRING s as parameter.
#

def timeConversion(s):
    c_time = s[0:-2]
    hr = c_time.split(':')[0]
    min = c_time.split(':')[1]
    sec = c_time.split(':')[2]
    zone = f'{s[-2]}{s[-1]}'
    if zone == 'AM':
        if hr == '12':
            r_hr = f'0{str(int(hr) - 12)}'
            result = f'{r_hr}:{min}:{sec}'
            return(result)
        else:    
            result = f'{hr}:{min}:{sec}'
            return(result)
    else:
        if hr == '12':
            result = f'{hr}:{min}:{sec}'
            return(result)
        else:
            r_hr = str(int(hr) + 12)
            result = f'{r_hr}:{min}:{sec}'  
            return(result)

