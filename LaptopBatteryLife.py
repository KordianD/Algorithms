#!/bin/python3

import math
import os
import random
import re
import sys
import numpy
import pandas as pd
from sklearn.linear_model import LinearRegression

if __name__ == '__main__':
    timeCharged = float(input(""))
    
    data = pd.read_csv('trainingdata.txt', sep=",", header=None, names=['x', 'y'])
    data.drop(data[data.x > 4].index, inplace=True)

    model = LinearRegression()
    model.fit(data.x.values.reshape(-1, 1), data.y.values.reshape(-1,1))
    
    if timeCharged > 4:
        print(8)
    else:
        print(float(model.predict(timeCharged)))

