#include <bits/stdc++.h>
using namespace std;

double cooker(double x, double y, double fn(double x), double h) {
    double first = 0;
    double second = 0;
    double third = 0;
    for (int i = x; i < y; i += h) {
        if (i == x || i == y)
            first += fn(i);
        else if (i % 2 == 0)
            second += fn(i);
        else
            third += fn(i);
    }
    return (h / 3) * (first + (2 * second) + (4 * third));
}

double fn(double x) {
    double ln = log(x) / log(exp(1));
    return ln;
}

double x = 4;
    double y = 5.2;
    double h = 0.2;

int main() {
    cout << cooker(x, y, fn, h) << endl;
    return 0;
}
