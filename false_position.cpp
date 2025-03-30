#include <iostream>
using namespace std;

double false_equ(double x, double y, double fn(double a)) {
    return (x * fn(y) - y * fn(x)) / (fn(y) - fn(x));
}

double maker(double x, double y, double fn(double a), double precetion) {
    double result = 0;
    double change = false_equ(x, y, fn);
    while (abs(result - change) >= precetion) {
        result = change;
        if (change == 0) {
            break;
        } else if (fn(x) * fn(change) < 0) {
            y = change;
        } else {
            x = change;
        }
        change = false_equ(x, y, fn);
        cout << result - change << endl;
        // if (abs(result - change) <= precetion) return result;
    }
    return result;
}

double equ(double x) {
    return x * x * x * x * x * x - x * x * x * x - x * x * x - 1;
}

int main() {
    double x = 1, y = 2;
    double result = maker(x, y, equ, 0.001);
    cout << "The root is: " << result << endl;
    return 0;
}
