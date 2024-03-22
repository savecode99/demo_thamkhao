#include <iostream>
#include <string>
using namespace std;

// Hàm chuy?n d?i mã nh? phân sang mã Gray
string binaryToGray(string binary) {
    string gray = "";

    // Bit d?u tiên c?a mã Gray gi?ng v?i bit d?u tiên c?a s? nh? phân
    gray += binary[0];

    // Th?c hi?n phép XOR cho các bit ti?p theo
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
        cin >> binary; // Ð?c s? nh? phân

        // In ra mã Gray tuong ?ng
        cout << binaryToGray(binary) << endl;
    }

    return 0;
}
