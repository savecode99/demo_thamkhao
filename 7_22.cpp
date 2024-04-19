#include <bits/stdc++.h> 
using namespace std; 

// Hàm d? tính toán di?n tích l?n nh?t c?a hình ch? nh?t trong histogram
int getMaxArea(const vector<int>& arr) {
    stack<int> s; // Khai báo m?t ngan x?p d? luu tr? ch? m?c c?a các c?t trong histogram
    s.push(-1); // Ðua ch? m?c -1 vào ngan x?p làm ch? m?c m?c cho các c?t bên trái d?u tiên
    int area = arr[0]; // Kh?i t?o di?n tích l?n nh?t b?ng chi?u cao c?a c?t d?u tiên
    int n = arr.size(); // S? lu?ng c?t trong histogram

    // Khai báo và kh?i t?o hai vector d? luu tr? ch? m?c c?a c?t nh? hon bên trái và bên ph?i
    vector<int> left_smaller(n, -1), right_smaller(n, n); 

    // Duy?t qua các c?t c?a histogram
    for (int i = 0; i < n; ++i) { 
        // L?p qua các c?t trong ngan x?p và c?p nh?t ch? m?c c?a c?t nh? hon bên ph?i
        while (!s.empty() && s.top() != -1 && arr[s.top()] > arr[i]) { 
            right_smaller[s.top()] = i; 
            s.pop(); 
        } 
        // C?p nh?t ch? m?c c?a c?t nh? hon bên trái
        left_smaller[i] = (i > 0 && arr[i] == arr[i - 1]) ? left_smaller[i - 1] : s.top();
        // Ðua ch? m?c hi?n t?i vào ngan x?p d? c?p nh?t cho các c?t ti?p theo
        s.push(i); 
    } 

    // Duy?t qua các c?t c?a histogram và tính di?n tích l?n nh?t
    for (int j = 0; j < n; ++j) { 
        area = max(area, arr[j] * (right_smaller[j] - left_smaller[j] - 1)); 
    } 
    return area; // Tr? v? di?n tích l?n nh?t c?a hình ch? nh?t trong histogram
} 

int main() { 
    int t; cin >> t; // Nh?p s? lu?ng b? test cases
    while(t--) {
        int n; cin >> n; // Nh?p s? lu?ng c?t trong histogram
        vector<int> hist(n); // Khai báo m?t vector d? luu d? cao c?a t?ng c?t trong histogram
        for(int &x : hist) cin >> x; // Nh?p d? cao c?a các c?t
        cout << getMaxArea(hist) << endl; // In ra di?n tích l?n nh?t c?a hình ch? nh?t trong histogram
    }
    return 0; 
}
