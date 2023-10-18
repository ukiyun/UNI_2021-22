def msort(l):
    if len(l) <= 1:
        return l
    else:
        return msort([e for e in l[1:] if e <= l[0]]) + [l[0]] + msort([e for e in l[1:] if e > l[0]])