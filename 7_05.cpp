//#include <iostream>
//#include <stack>
//#include <string>
//
//using namespace std;
//
//// H�m d? t�m d? d�i c?a d�y ngo?c d�ng d�i nh?t
//int longestValidParentheses(string s) {
//    stack<int> stk;
//    stk.push(-1); // Ch? s? c?a ph?n t? ? d?nh ngan x?p du?c s? d?ng d? t�nh to�n d? d�i c?a d�y ngo?c d�ng
//    int maxLen = 0;
//    
//    for (int i = 0; i < s.length(); i++) {
//        if (s[i] == '(') {
//            stk.push(i); // �?y ch? s? c?a d?u '(' v�o ngan x?p
//        } else {
//            stk.pop(); // Lo?i b? d?u '(' kh?p v?i d?u ')' hi?n t?i
//            
//            if (stk.empty()) {
//                stk.push(i); // N?u ngan x?p r?ng, d?t ch? s? hi?n t?i v�o ngan x?p d? t�nh to�n k?t qu? ti?p theo
//            } else {
//                maxLen = max(maxLen, i - stk.top()); // T�nh to�n d? d�i c?a d�y ngo?c d�ng
//            }
//        }
//    }
//    
//    return maxLen;
//}
//
//int main() {
//    int T;
//    cin >> T;
//
//    for (int t = 0; t < T; t++) {
//        string s;
//        cin >> s;
//
//        int result = longestValidParentheses(s);
//        cout << result << endl;
//    }
//
//    return 0;
//}

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        stack<char> st;
        int longestValid = 0;
        st.push(-1); // Push a sentinel value to mark the start of the sequence

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                st.push(i); // Push index of '('
            } else { // Encountered ')'
                st.pop(); // Pop matching '(' or the sentinel value
                if (!st.empty()) {
                    longestValid = max(longestValid, i - st.top()); // Update the length of the longest valid sequence
                } else {
                    st.push(i); // Push the current index as sentinel for the next valid sequence
                }
            }
        }

        cout << longestValid << endl;
    }

    return 0;
}
