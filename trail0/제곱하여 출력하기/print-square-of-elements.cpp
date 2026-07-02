#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    cin >> N;
    int n[N];
    for (int i = 0; i < N; i++){
        cin >> n[i];
        cout << n[i] * n[i] << " ";
    }
    return 0;
}