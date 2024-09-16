#include<bits/stdc++.h> // Th�m thu vi?n ti�u chu?n c?a C++ d? s? d?ng c�c c?u tr�c d? li?u v� h�m thu vi?n
using namespace std;

int main() {
    int T; // Bi?n d? luu s? lu?ng b? test cases
    cin >> T; // Nh?p s? lu?ng b? test cases t? d?u v�o

    while(T--) { // L?p qua t?ng b? test case
        string P; // Chu?i luu bi?u th?c
        cin >> P; // Nh?p bi?u th?c t? d?u v�o

        stack<int> s; // Kh?i t?o m?t ngan x?p (stack) s? d?ng trong qu� tr�nh ki?m tra d?u ngo?c

        // Duy?t qua t?ng k� t? trong bi?u th?c P
        for(int i = 0; i < P.size(); i++) {
            // N?u g?p d?u m? ngo?c '('
            if(P[i] == '(') {
                // Ki?m tra n?u k� t? tru?c d� l� d?u '-'
                if(i > 0 && P[i-1] == '-') {
                    // Th�m v�o ngan x?p gi� tr? -1 d? d�nh d?u vi?c c?n d?o d?u sau khi g?p d?u d�ng ngo?c ')'
                    s.push(-1);
                } else {
                    // N?u kh�ng, th�m v�o ngan x?p gi� tr? 1 d? d�nh d?u d?u m? ngo?c '(' th�ng thu?ng
                    s.push(1);
                }
            } 
            // N?u g?p d?u d�ng ngo?c ')'
            else if(P[i] == ')') {
                // Lo?i b? gi� tr? kh?i ngan x?p v� d� g?p d?u d�ng ngo?c
                s.pop();
            } 
            // N?u g?p d?u '+' ho?c '-'
            else if(P[i] == '+' || P[i] == '-') {
                // Ki?m tra n?u ngan x?p kh�ng r?ng v� gi� tr? d?u ngan x?p l� -1 (d� g?p d?u '-')
                if(!s.empty() && s.top() == -1) {
                    // �?o d?u c?a d?u '+' ho?c '-' hi?n t?i
                    P[i] = (P[i] == '+') ? '-' : '+';
                }
            }
        }

        string result = ""; // Chu?i k?t qu? sau khi x? l� d?u ngo?c
        // L?c b? c�c k� t? d?u ngo?c v� luu v�o chu?i k?t qu?
        for(int i = 0; i < P.size(); i++) {
            if(P[i] != '(' && P[i] != ')') {
                result += P[i];
            }
        }
        // In ra chu?i k?t qu? c?a b? test case hi?n t?i
        cout << result << "\n";
    }
    return 0;
}
