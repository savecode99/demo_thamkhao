#include <bits/stdc++.h>

using namespace std;

long long mod = 1e9 + 7;
vector<long long> fibs(1e6 + 5, -1);

long long fib(long long n) {
    if (n <= 2)
        return 1;
    if (fibs[n] != -1)
        return fibs[n];
    else
        return fibs[n] = (fib(n - 1) + fib(n - 2)) % mod;
}

void solve(long long n, long long k) {
    if (n == 1) {
        cout << "A" << endl;
        return;
    } else if (n == 2) {
        cout << "B" << endl;
        return;
    }
    long long fib_n_2 = fib(n - 2);
    if (k > fib_n_2) {
        solve(n - 1, k - fib_n_2);
    } else {
        solve(n - 2, k);
    }
}

int main() {
	int t; cin >> t;
	
	while(t--)
	{
		
	
    long long n, k; cin >> n >> k;
    solve(n, k);
    
    
    
    }
    
    	
    return 0;
}
