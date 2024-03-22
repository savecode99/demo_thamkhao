#include <iostream>
#include <vector>
using namespace std;

// Hàm này t?o và in ra tam giác d?c bi?t
void printSpecialTriangle(const vector<int>& A) {
    int n = A.size();
    vector<vector<int>> triangle;

    // T?o hàng d?u tiên c?a tam giác
    triangle.push_back(A);

    // T?o các hàng ti?p theo
    for (int i = 1; i < n; ++i) {
        vector<int> row;
        for (int j = 0; j < triangle[i-1].size() - 1; ++j) {
            row.push_back(triangle[i-1][j] + triangle[i-1][j+1]);
        }
        triangle.push_back(row);
    }

    // In ra tam giác
    for (const auto& row : triangle) {
        cout << "[";
        for (int i = 0; i < row.size(); ++i) {
            cout << row[i] << (i < row.size() - 1 ? " " : "");
        }
        cout << "]" << endl;
    }
}

int main() {
    int T, N;
    cin >> T;
    while (T--) {
        cin >> N;
        vector<int> A(N);
        for (int& a : A) {
            cin >> a;
        }
        printSpecialTriangle(A);
    }
    return 0;
