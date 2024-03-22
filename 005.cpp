#include <iostream>
#include <algorithm> // Cho next_permutation
using namespace std;

int main() {
    int T, N;
    cin >> T;
    while (T--) {
        cin >> N;
        int arr[N];

        // Kh?i t?o m?ng v?i các s? t? 1 d?n N
        for (int i = 0; i < N; ++i) {
            arr[i] = i + 1;
        }

        // S? d?ng next_permutation d? li?t kê t?t c? các hoán v?
        do {
            for (int i = 0; i < N; ++i) {
                cout << arr[i];
            }
            cout << " ";
        } while (next_permutation(arr, arr + N));
        
        cout << endl;
    }
    return 0;
}
