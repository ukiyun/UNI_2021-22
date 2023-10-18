def bisect(f, n):
    lower = 0
    upper = 1
    
    for i in range(n):
        midpoint = (lower + upper) / 2
        if (f(lower) < 0 and f(midpoint) < 0) or (f(lower) > 0 and f(midpoint) > 0):
            lower = midpoint
        else:
            upper = midpoint
    return round(midpoint,5)