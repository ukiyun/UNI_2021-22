def is_perfect(n):
    sums = 0
    for i in range (1, n):
        if (n % i == 0):
            sums = sums + i
            i = i + 1
        else:
            i = i + 1
    return (sums == n)
