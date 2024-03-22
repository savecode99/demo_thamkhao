#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// H�m t�m v� in ra ho�n v? ti?p theo
void nextPermutation(vector<int> &arr) {
    int n = arr.size(), i, j;

    // T�m pivot
    for (i = n - 2; i >= 0; i--) {
        if (arr[i] < arr[i + 1]) {
            break;
        }
    }

    // N?u t�m th?y pivot, t�m ph?n t? d? d?i ch?
    if (i >= 0) {
        for (j = n - 1; j > i; j--) {
            if (arr[j] > arr[i]) {
                break;
            }
        }
        swap(arr[i], arr[j]);
    }

    // �?o ngu?c do?n sau pivot
    reverse(arr.begin() + i + 1, arr.end());

    // In k?t qu?
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    int T, N;
    cin >> T;

    while (T--) {
        cin >> N;
        vector<int> arr(N);

        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }

        nextPermutation(arr);
    }

    return 0;
}
