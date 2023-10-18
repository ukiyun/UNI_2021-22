def mult(M,N):
    result = []
    if not (len(N) == len(M[0])):
        return []
    else:
        for i in range (0, len(M)):
            lines = []
            for j in range (0, len(N[0])):
                columns = 0
                for t in range (0, len(N)):
                    columns += M[i][t] * N[t][j]
                lines.append (columns)
            result.append (lines)
        return result