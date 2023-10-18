def reverse_subtuples(alist):
    end = []
    for i in range (len(alist)):
        end += [tuple(alist[i][::-1])]
    return end
            