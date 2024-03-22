#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;

// Hàm tính kho?ng cách gi?a hai di?m
double distance(int x1, int y1, int x2, int y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main() {
    int T, N;
    cin >> T; // Ð?c s? lu?ng b? test
    while (T--) {
        cin >> N; // Ð?c s? lu?ng di?m
        vector<pair<int, int>> points(N);
        for (int i = 0; i < N; ++i) {
            cin >> points[i].first >> points[i].second;
        }

        double minDist = 1e9; // Kh?i t?o kho?ng cách nh? nh?t là m?t giá tr? l?n
        for (int i = 0; i < N; ++i) {
            for (int j = i + 1; j < N; ++j) {
                // Tính kho?ng cách gi?a di?m i và j
                double dist = distance(points[i].first, points[i].second, points[j].first, points[j].second);
                // C?p nh?t kho?ng cách nh? nh?t
                if (dist < minDist) {
                    minDist = dist;
                }
            }
        }

        // In ra kho?ng cách nh? nh?t v?i d? chính xác 6 ch? s? sau d?u ph?y
        cout << fixed << setprecision(6) << minDist << " "<< endl;
    }
    return 0;
}

