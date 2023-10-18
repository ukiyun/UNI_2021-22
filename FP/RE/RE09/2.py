from functools import reduce
def map_reduce (lst):
    lst = list(filter(lambda x: x%2!=0, lst))
    lst = list(map (lambda x: x**2, lst))
    lst = reduce(lambda x, y: x*y if x< 50 else x+y, lst)
    return lst