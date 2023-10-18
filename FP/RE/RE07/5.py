def check_results(bet, results):
    length = len(bet)
    counter = 0
    for i in range (length):
        if (bet[i] == 'X' and (results[i][2]==results[i][3])):
            counter += 1
        if (bet[i] == '1' and (results[i][2]>results[i][3])):
            counter += 1 
        if (bet[i] == '2' and (results[i][2]<results[i][3])):
            counter += 1
    return counter