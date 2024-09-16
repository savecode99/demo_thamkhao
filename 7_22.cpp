#include <bits/stdc++.h> 
using namespace std; 

// H�m d? t�nh to�n di?n t�ch l?n nh?t c?a h�nh ch? nh?t trong histogram
int getMaxArea(const vector<int>& arr) {
    stack<int> s; // Khai b�o m?t ngan x?p d? luu tr? ch? m?c c?a c�c c?t trong histogram
    s.push(-1); // �ua ch? m?c -1 v�o ngan x?p l�m ch? m?c m?c cho c�c c?t b�n tr�i d?u ti�n
    int area = arr[0]; // Kh?i t?o di?n t�ch l?n nh?t b?ng chi?u cao c?a c?t d?u ti�n
    int n = arr.size(); // S? lu?ng c?t trong histogram

    // Khai b�o v� kh?i t?o hai vector d? luu tr? ch? m?c c?a c?t nh? hon b�n tr�i v� b�n ph?i
    vector<int> left_smaller(n, -1), right_smaller(n, n); 

    // Duy?t qua c�c c?t c?a histogram
    for (int i = 0; i < n; ++i) { 
        // L?p qua c�c c?t trong ngan x?p v� c?p nh?t ch? m?c c?a c?t nh? hon b�n ph?i
        while (!s.empty() && s.top() != -1 && arr[s.top()] > arr[i]) { 
            right_smaller[s.top()] = i; 
            s.pop(); 
        } 
        // C?p nh?t ch? m?c c?a c?t nh? hon b�n tr�i
        left_smaller[i] = (i > 0 && arr[i] == arr[i - 1]) ? left_smaller[i - 1] : s.top();
        // �ua ch? m?c hi?n t?i v�o ngan x?p d? c?p nh?t cho c�c c?t ti?p theo
        s.push(i); 
    } 

    // Duy?t qua c�c c?t c?a histogram v� t�nh di?n t�ch l?n nh?t
    for (int j = 0; j < n; ++j) { 
        area = max(area, arr[j] * (right_smaller[j] - left_smaller[j] - 1)); 
    } 
    return area; // Tr? v? di?n t�ch l?n nh?t c?a h�nh ch? nh?t trong histogram
} 

int main() { 
    int t; cin >> t; // Nh?p s? lu?ng b? test cases
    while(t--) {
        int n; cin >> n; // Nh?p s? lu?ng c?t trong histogram
        vector<int> hist(n); // Khai b�o m?t vector d? luu d? cao c?a t?ng c?t trong histogram
        for(int &x : hist) cin >> x; // Nh?p d? cao c?a c�c c?t
        cout << getMaxArea(hist) << endl; // In ra di?n t�ch l?n nh?t c?a h�nh ch? nh?t trong histogram
    }
    return 0; 
}
