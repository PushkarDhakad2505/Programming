#!/bin/python3

import math
import os
import random
import re
import sys


class Rectangle:
    def __init__(self,l,b):
        self.l=l
        self.b=b
def area1(l,b):
        return int(l)*int(b)



class Circle:
    def __init__(self,r):
        self.r=r
def area2(r):
        return 3.14* int(r) * int(r)


if __name__ == '__main__':  

    q = int(input())
    queries = []
    for _ in range(q):
        a=0
        b=0
        r=1
        args = input().split()
        shape_name, params = args[0], map(int, args[1:])
        if shape_name == "rectangle":
            a, b = map(int ,input().split(" "))
            shape = Rectangle(a, b)
        elif shape_name == "circle":
            r = map(int,input().split(" "))
            shape = Circle(r)
        else:
            raise ValueError("invalid shape type")
        print("%.2f\n" % area1(a,b))
        print("%.2f\n" % area2(r))
    
