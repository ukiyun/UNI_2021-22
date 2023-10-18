def override(l1,l2):
    l3 = list (x[0] for x in l2)
    l1 = list(filter(y[0] not in l3 for y in l1, l1))
    return l1 +l2