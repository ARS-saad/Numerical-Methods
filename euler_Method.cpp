#include <iostream>
using namespace std;

double eulerMethod(double x, double y, double f(double, double), double h, int n) {
    for (int i = 0; i < n; i++) {
        y += h * f(x, y);
        x += h;
    }
    return y;
}

double f(double x, double y) {
    return x + y;
}

int main() {
    double x = 0.0, y = 1.0, h = 0.2;
    int n = 2;
    double result = eulerMethod(x, y, f, h, n);
    cout << "Result: " << result << endl;
    return 0;
}
