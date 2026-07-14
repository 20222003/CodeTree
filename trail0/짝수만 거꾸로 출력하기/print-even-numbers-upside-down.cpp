#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    cin >> N;
    int N_L[N];
    for (int I = 0; I < N; I++){
        cin >> N_L[I];
    }
    for (int i = N-1; i >= 0; i--){
        if (N_L[i] % 2 == 0) cout << N_L[i] << " ";
    }
    return 0;
}