def calculator (expr):
    if (type(expr) == int):
        return expr
    lhs = calculator(expr[0])
    if (type(lhs)==tuple and len(lhs)==2):
        lhs = lhs[0] / lhs[1]
    op = calculator (expr[1])
    rhs = calculator (expr[2])
    if (type(rhs)==tuple and len(rhs)==2):
        rhs = rhs[0]/rhs[1]
    if op == '/':
        return (lhs/rhs)
    if op == '*':
        return (lhs*rhs)