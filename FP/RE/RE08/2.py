def flatten(alist):
    if (len(alist)==0):
        return []
    if isinstance(alist[0], list):
        return flatten(alist[0]) + flatten(alist[1:])
    else:
        return [alist[0]] + flatten(alist[1:])



'''
or 
'''

def flatten(alist):
    if (type(alist)!= list):
        return [alist]
    if (len (alist)==0):
        return []
    return flatten(alist[0]) + flatten(alist[1:])