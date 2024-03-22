#include <iostream>
#include <vector>
using namespace std;

// Hàm d? in m?t xâu
void printString(const vector<char>& str) {
    for (char ch : str) {
        cout << ch;
    }
    cout << " ";
}

// Hàm quay lui d? t?o xâu
void generateString(int n, vector<char>& str, int len) {
    if (len == n) { // Khi d?t d? d? dài, in xâu
        printString(str);
        return;
    }

    // Thêm 'A' vào xâu và quay lui
    str[len] = 'A';
    generateString(n, str, len + 1);

    // Thêm 'B' vào xâu và quay lui
    str[len] = 'B';
    generateString(n, str, len + 1);
}

int main() {
    int T, n;
    cin >> T; // Ð?c s? lu?ng test cases

    while (T--) {
        cin >> n; // Ð?c d? dài xâu
        vector<char> str(n); // T?o xâu v?i d? dài n

        generateString(n, str, 0); // G?i hàm quay lui
        cout << endl;
    }

    return 0;
}
