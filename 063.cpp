#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define pb push_back
#define all(v) v.begin(),v.end()
#define f(i,a,b) for(int i=a; i<=b; ++i)
#define fn(i,a,b) for(int i=a; i>=b; --i)
#define faster() ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
const int MOD=1e9+7;

using namespace std;
 long long f[1005][1005];
int main()
{
    faster();
    

    int t;
	cin >> t;
	while(t--){
        int n, k;
        cin >> n >> k;
        vector<long long> a(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            a[i] %= k;
        }
        for (int i = 1; i < k; i++)
            f[1][i] = -1e18;
        f[1][a[1]] = 1;
        for (int i = 2; i <= n; i++)
        {
            for (int j = 0; j < k; j++)
            {
                f[i][j] = max(f[i - 1][j], f[i - 1][(j - a[i] + k) % k] + 1);
            }
        }
        cout << f[n][0] << endl;
        f(i,1,n) f(j,1,n) f[i][j]=0;
	}

   return 0;
}
