def moving_average(alist,n):
    neighbours = []
    if (len(alist)<3 or n<3):
        return []
    else:
        limit = len(alist)-n +1
        for i in range (limit):
            neighbours.append(round(sum(alist[i:i + int(n/2)] + alist[i + int(n/2) + 1 :i+n])/ (n - 1), 2))
    return neighbours
