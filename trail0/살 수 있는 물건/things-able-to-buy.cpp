#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    int book = 3000, mask = 1000;
    cin >> N;
    if  (N >= book) cout << "book";
    else if (N >= mask) cout << "mask";
    else cout << "no";
    return 0;
}