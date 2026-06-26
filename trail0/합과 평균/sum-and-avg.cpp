#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int A, B;
    cin >> A >> B;
    int sum = A + B;
    double ave = (double)sum/2;
    cout << fixed;
    cout.precision(1);
    cout << sum << " " << ave;
    return 0;
}