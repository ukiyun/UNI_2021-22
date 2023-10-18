def deriv (f):
    def df(x):
        h = 0.001
        df = (f(x-h)- f(x))/h
        return df
    return (deriv(f)())