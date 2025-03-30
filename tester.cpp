// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     double d=123.45667;
//     cout<<fixed<<scientific<<setprecision(4)<<d<<endl;
//     cout<<scientific<<setprecision(6)<<d<<endl;

//     double number =1.29876;
//        double turncation_value = trunc(number*10000)/10000;
//        cout<<"Original Value : "<<number<<endl;
//        cout<<"Truncated Value : "<<turncation_value<<endl;
//        cout<<"Truncation Error : "<<number-turncation_value<<endl;
// }


#include<bits/stdc++.h>
using namespace std;
double lagrangeInterpolation(double x_vals[], double y_vals[], int n, double x) {
    double result = 0;
    for (int i = 0; i < n; i++) {
        double term = y_vals[i];
        for (int j = 0; j < n; j++) {
            if (i != j) {
                term *= (x - x_vals[j]) / (x_vals[i] - x_vals[j]);
            }
        }
        result += term;
    }
    return result;
}

int main() {
    double x_vals[] = {5, 6, 9,11};
    double y_vals[] = {12,13,14,16};
    int n = 4;
    double x_interp = 10;

    cout << "Interpolated value: " << lagrangeInterpolation(x_vals, y_vals, n, x_interp) << endl;
    return 0;
}
