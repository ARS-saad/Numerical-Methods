#include <iostream>
using namespace std;

double langrange(double x[], double y[], double x_int, int size) {
    double result = 0;
    for (int i = 0; i < size; i++) {
        double term = y[i];
        for (int j = 0; j < size; j++) {
            if (i != j) {
                term *= (x_int - x[j]) / (x[i] - x[j]);
            }
        }
        result += term;
    }
    return result;
}

int main() {
    double x[] = {1, 2, 3};
    double y[] = {1, 4, 9};
    double x_int = 2.5;
    double size = 3;
    cout << langrange(x, y, x_int, size) << endl;
    return 0;
}
