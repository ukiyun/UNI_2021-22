def mastermind (g1, g2, g3, c1, c2, c3):
    point_sum = 0
    if (g1 == c1):
        point_sum += 3
        g1 = '1'
        c1 = '2'
    if (g2 == c2):
        point_sum += 3
        g2 = '3'
        c2 = '4'
    if (g3 == c3):
        point_sum += 3
        g3 = '5'
        c3 = '6'
    if (g2 == c1):
        point_sum += 1
        g2 = '7'
        c1 = '8'
    if (g1 == c2):
        point_sum += 1
        g1 = '9'
        c2 = '10'
    if (g2 == c3):
        point_sum += 1
        g2 = '11'
        c3 = '12'
    if (g3 == c1):
        point_sum += 1
        g3 = '13'
        c1 = '14'
    if (g3 == c2):
        point_sum += 1
        g3 = '15'
        c2 = '16'
    if (g1 == c3):
        point_sum += 1
        g1 = '17'
        c3 = '18'
    return point_sum