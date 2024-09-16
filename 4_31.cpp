#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1e9 + 7;
using Matrix = vector<vector<long long>>;

// Hàm nhân hai ma tr?n
Matrix multiplyMatrix(const Matrix& A, const Matrix& B, int N) {
    Matrix result(N, vector<long long>(N, 0));
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            for (int k = 0; k < N; ++k) {
                result[i][j] = (result[i][j] + A[i][k] * B[k][j]) % MOD;
            }
        }
    }
    return result;
}

// Hàm tính luy th?a ma tr?n A^k
Matrix powerMatrix(const Matrix& A, int N, int K) {
    if (K == 1) return A;

    Matrix half = powerMatrix(A, N, K / 2);
    Matrix result = multiplyMatrix(half, half, N);

    if (K % 2 == 1) {
        result = multiplyMatrix(result, A, N);
    }

    return result;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, K;
        cin >> N >> K;

        Matrix A(N, vector<long long>(N));
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                cin >> A[i][j];
            }
        }

        Matrix X = powerMatrix(A, N, K);

        // In ra k?t qu? ma tr?n X
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                cout << X[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
