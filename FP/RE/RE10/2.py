def full_list(i,j):
    return list(x for x in range (i,j+1))

def comprehensions(i, j):
    ranged = full_list(i,j)
    first = list(x for x in ranged if x%10==3 or x%10==8)
    second = tuple((round(x**0.5,2) for x in ranged))
    third = {i: chr(i) for i in range (i, j+1)}

    return (first, second, third)