def square_odds(values):
    values = values.split(',')
    values = list(int(x) for x in values)
    values = list(x for x in values if x%2!=0)
    values = list(x**2 for x in values)
    values = list(str(x) for x in values)
    return ','.join(values)