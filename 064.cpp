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
int a[1005][1005];
int main()
{
    faster();
    //freopen("input.txt","r", stdin);
    //freopen("output.txt","w", stdout);

    a[0][0] = 1;
    for(int i = 1; i < 1005; ++i){
        a[i][0] = 1;
        for(int j = 1; j < 1005; ++j)
            a[i][j] = (a[i-1][j-1]%MOD + a[i-1][j]%MOD)%MOD;
    }
    int t;
	cin >> t;
	while(t--){
        int n, k;
        cin >>n >>k;
        cout <<a[n][k];
        cout <<'\n';

	}
   return 0;
}
