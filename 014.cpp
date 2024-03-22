#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1e9 + 7;

// Hàm nhân hai ma tr?n
vector<vector<int>> multiplyMatrix(const vector<vector<int>>& a, const vector<vector<int>>& b) {
    int n = a.size();
    vector<vector<int>> result(n, vector<int>(n, 0));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            for (int k = 0; k < n; ++k) {
                result[i][j] = (result[i][j] + (long long)a[i][k] * b[k][j]) % MOD;
            }
        }
    }
    return result;
}

// Hàm luy th?a ma tr?n nhanh
vector<vector<int>> matrixPower(vector<vector<int>> base, int power) {
    int n = base.size();
    vector<vector<int>> result(n, vector<int>(n, 0));
    for (int i = 0; i < n; ++i) result[i][i] = 1; // Ma tr?n don v?

    while (power) {
        if (power & 1) result = multiplyMatrix(result, base);
        base = multiplyMatrix(base, base);
        power >>= 1;
    }

    return result;
}

// Hàm tính t?ng du?ng chéo ph?
int sumSecondaryDiagonal(const vector<vector<int>>& matrix) {
    int n = matrix.size();
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum = (sum + matrix[i][n - 1 - i]) % MOD;
    }
    return sum;
}

int main() {
    int T, N, K;
    cin >> T;
    while (T--) {
        cin >> N >> K;
        vector<vector<int>> A(N, vector<int>(N));
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                cin >> A[i][j];
            }
        }

        vector<vector<int>> A_powered = matrixPower(A, K);
        cout << sumSecondaryDiagonal(A_powered) << endl;
    }
    return 0;
}
