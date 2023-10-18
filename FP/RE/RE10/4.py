def multiples_of7(n):
    candidate = 0
    while candidate<n:
        if (candidate%7==0):
            yield candidate
        candidate += 1