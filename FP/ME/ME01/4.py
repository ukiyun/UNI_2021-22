num = int (input())
steps_counter = 0
multiplicative = 1
while (num > 9):
    for digit in range (0, len(str(num))):
        multiplicative *= int(str(num)[digit])
    steps_counter += 1
    num = multiplicative
    multiplicative = 1
print (steps_counter)
