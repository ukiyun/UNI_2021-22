def triplet(tup):
    found = False
    numbers = len(tup)
    for i in range (0, numbers -2):
        for j in range (i+1, numbers -1):
            for k in range (j+1, numbers):
                if (tup[i] + tup[j] + tup[k] == 0):
                    return (tup[i], tup[j], tup[k])
                    found = True
    if (found == False):
        return ()