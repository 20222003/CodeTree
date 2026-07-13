#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b;
    cin >> a >> b;
    int lis[10] = {a,b};
    cout << lis[0] << " " << lis[1] << " ";
    for (int i = 2; i <10 ; i++){
        lis[i] = (a+b) % 10;
        a = b;
        b = lis[i];
        cout << lis[i] << " ";
    }

    return 0;
}