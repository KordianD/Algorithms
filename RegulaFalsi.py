def f(x):
    return x * x * x + 3 * x - 5


def RegulaFalsi(a, b, ACCURACY):
    x1 = a - f(a) * (b - a) / (f(b) - f(a))
    if abs(f(x1)) < ACCURACY:
        return x1
    if f(x1) * f(a) < 0:
        x0 = a
    else:
        x0 = b
    while abs(x1 - x0) > ACCURACY:
        x1 = x1 - f(x1) * (x0 - x1) / (f(x0) - f(x1))
        if abs(f(x1)) < ACCURACY:
            return x1
    return (x1 + x0) / 2


print (RegulaFalsi(0, 5, 0.000001))
