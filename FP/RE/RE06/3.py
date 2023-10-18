def local_minima (alist):
    length = len (alist)
    ending = []
    for i in range (length - 2):
        minima = min (alist[i:i+3])
        if (alist[i:i+3].count(minima)>1):
            continue
        else:
            ending += [minima]
        
    return ending




