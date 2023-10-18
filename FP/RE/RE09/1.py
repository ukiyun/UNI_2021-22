def sort_by_f(alist):
    return sorted(alist, key = (lambda x: (5-x) if x>=5 else x))