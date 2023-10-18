def isomorphic(astring1, astring2):
    d = {}
    s = set()
    for i in range (len(astring1)):
        x = astring1[i]
        y = astring2[i]
        if x in d:
            if not (d[x]==y):
                return ("'{}' and '{}' are not isomorphic".format(astring1, astring2))
        else:
            if y in s:
                return ("'{}' and '{}' are not isomorphic".format(astring1, astring2))
            d[x] = y
            s.add(y)
    woo = list(d.items())
    
    return ("'{}' and '{}' are isomorphic because we can map: {}".format(astring1, astring2, woo))