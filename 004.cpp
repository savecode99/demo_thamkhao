#include <iostream>
#include <vector>
using namespace std;

// H�m d? in m?t x�u
void printString(const vector<char>& str) {
    for (char ch : str) {
        cout << ch;
    }
    cout << " ";
}

// H�m quay lui d? t?o x�u
void generateString(int n, vector<char>& str, int len) {
    if (len == n) { // Khi d?t d? d? d�i, in x�u
        printString(str);
        return;
    }

    // Th�m 'A' v�o x�u v� quay lui
    str[len] = 'A';
    generateString(n, str, len + 1);

    // Th�m 'B' v�o x�u v� quay lui
    str[len] = 'B';
    generateString(n, str, len + 1);
}

int main() {
    int T, n;
    cin >> T; // �?c s? lu?ng test cases

    while (T--) {
        cin >> n; // �?c d? d�i x�u
        vector<char> str(n); // T?o x�u v?i d? d�i n

        generateString(n, str, 0); // G?i h�m quay lui
        cout << endl;
    }

    return 0;
}
