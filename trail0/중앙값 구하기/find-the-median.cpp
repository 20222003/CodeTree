#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int A, B, C, sum;
    cin >> A >> B >> C;
    if (A > B){
        if (A > C)
            if (B > C) cout << B;
            else cout << C;
    }
    if (B > A){
        if (B > C)
            if (A > C) cout << A;
            else cout << C;
    }
    if (C > A){
        if (C > B)
            if (A > B) cout << A;
            else cout << B;
    }
    return 0;
}