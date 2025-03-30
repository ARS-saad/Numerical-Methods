#include <bits/stdc++.h>
using namespace std;

double cooker(double x, double y, double fn(double x), int h) {
    double first = 0;
    double second = 0;
    for (int i = x; i <= y; i += h) {
        if (i == x || i == y)
            first += fn(i);
        else
            second += fn(i);
    }
    return (first + 2 * second) * h / 2;
}

double fn(double x) {
    return x / (x + 1);
}

int main() {
    double x = 0;
    double y = 6;
    int h = 1;
    cout << cooker(x, y, fn, h) << endl;
    return 0;
}
