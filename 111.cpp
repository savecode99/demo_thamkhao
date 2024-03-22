#include <iostream>
using namespace std;

long long maxBishops(long long n) {
    // V� m?i qu�n tu?ng chi?m 1 du?ng ch�o, v� m?i b�n c? c� 2n-1 du?ng ch�o,
    // nhung ch? c� th? s? d?ng n?a s? d� m?t c�ch hi?u qu? do c�ch t?n c�ng c?a tu?ng.
    // Do d�, c�ng th?c t�nh s? tu?ng t?i da l� n + (n - 1) = 2n - 1.
    // Nhung d? tr�nh d?t tu?ng ? c�c � kh�ng an to�n, ch�ng ta c?n ph�n t�ch k? hon.
    if (n == 1) return 1; // Tru?ng h?p d?c bi?t khi n = 1, ch? c� th? d?t 1 qu�n tu?ng
    return 2*(n-1); // Tr? v? s? lu?ng tu?ng t?i da c� th? d?t m� kh�ng t?n c�ng l?n nhau
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
