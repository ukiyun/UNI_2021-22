def collisions(alist):
    length = len(alist)
    dict = {}
    for i in range (length):
        number_length = len(str(alist[i]))
        number = alist[i]
        hashs = 0
        for i in range (number_length):
            digit = number % 10
            hashs += digit
            number = number // 10
        hashs = hashs % 8
        if (hashs in dict):
            dict[hashs]= dict[hashs] + 1
        else:
            dict[hashs]= 1
    return dict
