import math
shape = input()
if (shape == 'sphere'):
    radius = float (input())
    volume = (4/3)* math.pi * math.pow (radius, 3)
    print (round(volume,1))
if (shape == 'cylinder'):
    radius = float (input())
    height = float (input())
    volume = math.pi * math.pow (radius, 2) * height
    print (round(volume,1))
if (shape == 'cone'):
    radius = float (input())
    height = float (input())
    volume = (1/3)* math.pi * math.pow (radius, 2) * height
    print (round(volume,1))