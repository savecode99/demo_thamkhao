#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// H�m n�y s? in ra m?t ho�n v?
void printPermutation(const vector<int>& permutation) {
    for (int num : permutation) {
        cout << num;
    }
    cout << " ";
}

// H�m ch�nh d? sinh ho�n v?
void generatePermutations(int N) {
    vector<int> permutation;
    
    // T?o ho�n v? d?u ti�n v?i c�c s? theo th? t? gi?m d?n
    for (int i = N; i >= 1; --i) {
        permutation.push_back(i);
    }

    // S? d?ng h�m next_permutation d? sinh ra c�c ho�n v? ti?p theo
    do {
        printPermutation(permutation);
    } while (prev_permutation(permutation.begin(), permutation.end()));
}

int main() {
    int T, N;
    cin >> T; // �?c s? lu?ng test cases

    while (T--) {
        cin >> N; // �?c gi� tr? N cho m?i test case
        generatePermutations(N);
        cout << endl;
    }

    return 0;
}
