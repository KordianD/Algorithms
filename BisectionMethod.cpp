#include <iostream>
#include <cmath>

double bisection(double a, double b, const double ACCURACY);
double f(double x);

int main() {
    std::cout << bisection(1, 10, 0.00001) << std::endl;
}

double bisection(double a, double b, const double ACCURACY) {
    double z = (a + b) / 2;

    if (fabs(f(z)) < ACCURACY)
        return z;
    while (fabs(f(z)) > ACCURACY) {
        if (f(a) * f(z) < 0)
            b = z;
        else
            a = z;

        z = (a + b) / 2;

        if (fabs(a - b) < ACCURACY)
            return z;
    }
    return z;
}

double f(double x) {
    return x * x * x + 3 * x - 5;
}
