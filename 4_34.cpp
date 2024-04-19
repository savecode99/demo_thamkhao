#include <iostream>
#include <vector>

using namespace std;

// Hàm nhân hai da th?c P và Q d? t?o ra da th?c R
vector<int> multiplyPolynomials(const vector<int>& P, const vector<int>& Q, int M, int N) {
    vector<int> R(M + N - 1, 0); // Kh?i t?o da th?c R v?i s? h? s? là M + N - 1

    // Nhân t?ng h? s? c?a P v?i t?ng h? s? c?a Q và c?ng vào da th?c R
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            R[i + j] += P[i] * Q[j];
        }
    }

    return R;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int M, N;
        cin >> M >> N;

        vector<int> P(M);
        vector<int> Q(N);

        // Nh?p h? s? c?a da th?c P
        for (int i = 0; i < M; ++i) {
            cin >> P[i];
        }

        // Nh?p h? s? c?a da th?c Q
        for (int i = 0; i < N; ++i) {
            cin >> Q[i];
        }

        // Tính toán da th?c R = P * Q
        vector<int> R = multiplyPolynomials(P, Q, M, N);

        // In ra các h? s? c?a da th?c R
        for (int i = 0; i < M + N - 1; ++i) {
            cout << R[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
