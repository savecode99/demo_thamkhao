#include <iostream>
using namespace std;

long long maxBishops(long long n) {
    // Vì m?i quân tu?ng chi?m 1 du?ng chéo, và m?i bàn c? có 2n-1 du?ng chéo,
    // nhung ch? có th? s? d?ng n?a s? dó m?t cách hi?u qu? do cách t?n công c?a tu?ng.
    // Do dó, công th?c tính s? tu?ng t?i da là n + (n - 1) = 2n - 1.
    // Nhung d? tránh d?t tu?ng ? các ô không an toàn, chúng ta c?n phân tích k? hon.
    if (n == 1) return 1; // Tru?ng h?p d?c bi?t khi n = 1, ch? có th? d?t 1 quân tu?ng
    return 2*(n-1); // Tr? v? s? lu?ng tu?ng t?i da có th? d?t mà không t?n công l?n nhau
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        long long n;
        cin >> n;
        cout << maxBishops(n) << endl;
    }
    return 0;
}
