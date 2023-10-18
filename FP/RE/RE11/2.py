def find_me(f, limits):
    inferior = limits[0]
    superior = limits[1]
    mid = (superior + inferior) // 2
    it = 0
    n = f(mid)
    if n == -1: 
        return find_me(f, (inferior, mid - 1)) + 1
    if n == 1:
        return find_me(f, (mid + 1, superior)) + 1
        
    return it + 1