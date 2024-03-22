#include <iostream>
#include <string>
using namespace std;

// H�m chuy?n d?i m� nh? ph�n sang m� Gray
string binaryToGray(string binary) {
    string gray = "";

    // Bit d?u ti�n c?a m� Gray gi?ng v?i bit d?u ti�n c?a s? nh? ph�n
    gray += binary[0];

    // Th?c hi?n ph�p XOR cho c�c bit ti?p theo
    for (int i = 1; i < binary.length(); i++) {
        gray += ((binary[i - 1] == binary[i]) ? '0' : '1');
    }

    return gray;
}

int main() {
    int T;
    cin >> T; // S? lu?ng test cases

    while (T--) {
        string binary;
        cin >> binary; // �?c s? nh? ph�n

        // In ra m� Gray tuong ?ng
        cout << binaryToGray(binary) << endl;
    }

    return 0;
}
