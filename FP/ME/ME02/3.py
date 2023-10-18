def rec_count(alist):
    dict = {}
    for i in alist:
        if not isinstance(i, list):
            d = {i: 1}
        else:
            d = rec_count (i)
        for keys,values in d.items():
            dict[keys] = values + dict.get(keys, 0)
    return dict

