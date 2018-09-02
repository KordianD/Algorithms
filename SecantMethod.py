from __future__ import division


def function(x):
    return x ** 3 + 2 * x ** 2 + 1


def secant(f, a, b, epx, epy):
    if abs(a - b) < epx:
        return a
    x = a - (f(a) * (a - b) / (f(a) - f(b)))
    i = 0
    while abs(f(x)) > epy and abs(a - b) > epx and i < 45:
        b = a
        a = x
        x = a - (f(a) * (a - b) / (f(a) - f(b)))
        i += 1
    if i > 43:
        print "invalid interval or too much accuracy demanded"
        return 0
    else:
        return x


print secant(function, -6.0, 6.0, 0.0000001, 0.000001)
