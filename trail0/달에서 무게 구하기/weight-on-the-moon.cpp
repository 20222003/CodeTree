#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int chu = 13;
    float gravitiy = 0.165;
    cout << fixed;
    cout << chu << " * " << gravitiy << " = ";
    cout.precision(6);
    cout << chu * gravitiy;
    return 0;
}