def sparse_dot_product(dict1, dict2):
    result = 0
    mult = 0
    for key in dict1:
        if (key in dict2):
            mult = dict1[key] * dict2[key]
            result = result + mult
    return result