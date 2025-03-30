#include <iostream>
using namespace std;

double equal(double x, double y) {
    return (abs(x + y) / 2);
}

double bisection(double a, double b, double (*fn)(double x), double precision) {
    double check = 0;
    double c = equal(a, b);
    while (abs(check - c) >= precision) {
        if (fn(c) == 0) {
            break;
        } else if (fn(a) * fn(c) < 0) {
            b = c;
        } else {
            a = c;
        }
        check = c;
        c = equal(a, b);
        cout << check << endl;
    }
    return c;
}

double fn(double x) {
    return x * x + 5 * x + 2;
}

int main() {
    double a = 0;
    double b = -1;
    double precision = 0.001;
    double root = bisection(a, b, fn, precision);
    cout << "Root: " << root << endl;
    return 0;
}
