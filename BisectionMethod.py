def f(x):
    return x * x * x + 3 * x - 5


def Bisection(a, b, ACCURACY):
    z = (a + b) / 2
    if abs(f(z)) < ACCURACY:
        return z
    while abs(f(z)) > ACCURACY:
        if f(a) * f(z) < 0:
            b = z
        else:
            a = z
        z = (a + b) / 2
        if abs(a - b) < ACCURACY:
            return z
    return z


print(Bisection(0, 10, 0.00001))