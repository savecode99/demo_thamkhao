#include<bits/stdc++.h> // Thêm thu vi?n tiêu chu?n c?a C++ d? s? d?ng các c?u trúc d? li?u và hàm thu vi?n
using namespace std;

int main() {
    int T; // Bi?n d? luu s? lu?ng b? test cases
    cin >> T; // Nh?p s? lu?ng b? test cases t? d?u vào

    while(T--) { // L?p qua t?ng b? test case
        string P; // Chu?i luu bi?u th?c
        cin >> P; // Nh?p bi?u th?c t? d?u vào

        stack<int> s; // Kh?i t?o m?t ngan x?p (stack) s? d?ng trong quá trình ki?m tra d?u ngo?c

        // Duy?t qua t?ng ký t? trong bi?u th?c P
        for(int i = 0; i < P.size(); i++) {
            // N?u g?p d?u m? ngo?c '('
            if(P[i] == '(') {
                // Ki?m tra n?u ký t? tru?c dó là d?u '-'
                if(i > 0 && P[i-1] == '-') {
                    // Thêm vào ngan x?p giá tr? -1 d? dánh d?u vi?c c?n d?o d?u sau khi g?p d?u dóng ngo?c ')'
                    s.push(-1);
                } else {
                    // N?u không, thêm vào ngan x?p giá tr? 1 d? dánh d?u d?u m? ngo?c '(' thông thu?ng
                    s.push(1);
                }
            } 
            // N?u g?p d?u dóng ngo?c ')'
            else if(P[i] == ')') {
                // Lo?i b? giá tr? kh?i ngan x?p vì dã g?p d?u dóng ngo?c
                s.pop();
            } 
            // N?u g?p d?u '+' ho?c '-'
            else if(P[i] == '+' || P[i] == '-') {
                // Ki?m tra n?u ngan x?p không r?ng và giá tr? d?u ngan x?p là -1 (dã g?p d?u '-')
                if(!s.empty() && s.top() == -1) {
                    // Ð?o d?u c?a d?u '+' ho?c '-' hi?n t?i
                    P[i] = (P[i] == '+') ? '-' : '+';
                }
            }
        }

        string result = ""; // Chu?i k?t qu? sau khi x? lý d?u ngo?c
        // L?c b? các ký t? d?u ngo?c và luu vào chu?i k?t qu?
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
