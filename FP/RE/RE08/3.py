OPERATIONS = { \
    "+": (lambda x, y: x + y), \
    "-": (lambda x, y: x - y), \
    "*": (lambda x, y: x * y), \
}

def calculator(expr):
    if isinstance(expr, tuple):
        return OPERATIONS[expr[1]](calculator(expr[0]), calculator(expr[2]))

    return expr


'''
or
'''

