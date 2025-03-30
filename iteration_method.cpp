#include <bits/stdc++.h>
using namespace std;

double cooker(double x, double fn(double x), double precision) {
    double result = fn(x);
    double check = 0;
    while (abs(result - check) >= precision) {
        result = check;
        check = fn(result);
    }
    return result;
}

double fn(double x) {
    return 1 / sqrt(x + 1);
}

int main() {
    double x = 0.5;
    double precision = 1e-5;
    double result = cooker(x, fn, precision);
    cout << "Result: " << result << endl;
    return 0;
}
