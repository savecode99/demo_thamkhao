#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define pb push_back
#define all(v) v.begin(),v.end()
#define f(i,a,b) for(ll i=a; i<=b; ++i)
#define fn(i,a,b) for(int i=a; i>=b; --i)
#define faster() ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
const int MOD=1e9+7;

using namespace std;
 int dp[1005][1005];
int main()
{
    faster();
    //freopen("input.txt","r", stdin);
    //freopen("output.txt","w", stdout);
   int t;
   cin >>t;
   while(t--){
        string a, b;
        cin >>a >>b;
        int n = a.size();
        int m = b.size();
        for(int i = 0; i < n; ++i){
            for(int j = 0; j < m; ++j){
                if(a[i] == b[j]) dp[i+1][j+1] = dp[i][j] + 1;
                else dp[i+1][j+1] = max(dp[i+1][j], dp[i][j+1]);
            }
        }
        cout <<dp[n][m] <<'\n';
   }

   return 0;
}
