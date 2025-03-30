#include <bits/stdc++.h>
using namespace std;

double new_rap(double x, double fn(double x), double fn1(double x)) {
    return x - fn(x) / fn1(x);
}

double cooker(double x, double fn(double x), double fn1(double x), double prection) {
    double result = new_rap(x, fn, fn1);
    double check = 0;
    while(abs(result - check) > prection) {
        check = result;
        result = new_rap(result, fn, fn1);
    }
    return result;
}

double fn(double x) {
    return x*x*x - 4*x - 9;
}

double fn1(double x) {
    return 3*x*x - 4;
}

int main() {
    double x = 2;
    double prection = 0.0001;
    double result = cooker(x, fn, fn1, prection);
    cout << "The root is: " << result << endl;
    return 0;
}
