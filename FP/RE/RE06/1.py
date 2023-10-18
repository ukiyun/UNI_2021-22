def mastermind (guesses, codes):
    count1 = 0
    count2= 0
    length = len(guesses)
    for i in range (length):
        if (guesses[i] == codes[i]):
            count1 += 1
    for g in guesses:
        if g in codes:
            count2 += 1
            codes.remove(g)
    return (count1, count2-count1)
            
