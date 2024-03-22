#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Kh?i t?o ma tr?n k?
    vector<vector<int>> adjMatrix(n, vector<int>(n));
    
    // Ð?c ma tr?n k? t? d?u vào
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> adjMatrix[i][j];
        }
    }

    // Chuy?n d?i t? ma tr?n k? sang danh sách k? và in ra k?t qu?
    for (int i = 0; i < n; ++i) {
        cout << i + 1 << ": ";
        for (int j = 0; j < n; ++j) {
            if (adjMatrix[i][j] == 1) {
                cout  << j + 1 << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}
