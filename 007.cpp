#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// Hàm này s? in ra m?t hoán v?
void printPermutation(const vector<int>& permutation) {
    for (int num : permutation) {
        cout << num;
    }
    cout << " ";
}

// Hàm chính d? sinh hoán v?
void generatePermutations(int N) {
    vector<int> permutation;
    
    // T?o hoán v? d?u tiên v?i các s? theo th? t? gi?m d?n
    for (int i = N; i >= 1; --i) {
        permutation.push_back(i);
    }

    // S? d?ng hàm next_permutation d? sinh ra các hoán v? ti?p theo
    do {
        printPermutation(permutation);
    } while (prev_permutation(permutation.begin(), permutation.end()));
}

int main() {
    int T, N;
    cin >> T; // Ð?c s? lu?ng test cases

    while (T--) {
        cin >> N; // Ð?c giá tr? N cho m?i test case
        generatePermutations(N);
        cout << endl;
    }

    return 0;
}
