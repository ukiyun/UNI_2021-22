def sum_numbers(number):
    sums = 0
    for i in range (0, number +1):
        sums = sums + i
        i = i + 1
    return sums

def stdev_numbers(number, precision=2):
    mean = sum_numbers(number) / number
    for i in range (1, number + 1):
        subs = i - mean
        squaring = subs ** 2
        squaring2 = squaring + squaring
        dev1 = squaring2 / number
        i = i + 1
    deviation = dev1 ** 0.5
    return (round(deviation, precision))