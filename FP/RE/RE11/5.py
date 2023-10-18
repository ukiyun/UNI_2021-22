def prefix(word1, word2):
    res = ""
    for l1, l2 in zip(word1, word2):
        if l1 != l2:
            break
        res += l1
    return res
    
def longest_prefix(words):
    if len(words) == 1:
        return words[0]

    res = []
    for i in range(0, len(words), 2):
        if i + 1 < len(words):
            res.append(prefix(words[i], words[i + 1]))
        else:
            res.append(words[i])

    return longest_prefix(res)