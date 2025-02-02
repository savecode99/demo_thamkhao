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
ll f[105][50005] = {}, mod = 1e9 + 7;
int main()
{
    faster();
    //freopen("input.txt","r", stdin);
    //freopen("output.txt","w", stdout);

    for (int i = 1; i <= 9; i++)
        f[1][i] = 1;
    for (int i = 2; i <= 100; i++)
    {
        for (int j = 5000; j >= 0; j--)
        {
            for (int k = 0; k <= 9; k++)
            {
                if (j >= k)
                {
                    f[i][j] += f[i - 1][j - k];
                    f[i][j] %= mod;
                }
            }
        }
    }
   int t;
   cin >>t;
   while(t--){
        int n, k;
        cin >>n >>k;
        cout <<f[n][k] <<'\n';
   }

   return 0;
}
