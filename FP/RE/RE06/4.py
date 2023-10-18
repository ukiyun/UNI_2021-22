def magic (mat):
    length = len(mat)
    sumDiag1 = 0
    sumDiag2 = 0
    for i in range  (length):
        sumDiag1 += mat[i][i]
        sumDiag2 += mat[i][length-i-1]
    if (sumDiag1 != sumDiag2):
        return False
    for i in range (length):
        sumLines = 0
        sumCol = 0
        for j in range (length):
            sumLines += mat[i][j]
            sumCol += mat[j][i]
        if not (sumLines == sumCol == sumDiag1):
            return False
    return True

        


