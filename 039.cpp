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

int main()
{
    faster();
    
    int t;
    cin >>t;
    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i = 0; i < n; ++i) cin >>a[i];
        sort(a,a+n);
        ll ans=0;
        for(int i = 0; i < n; ++i) ans += (a[i]*i)%MOD, ans%=MOD;
        cout <<ans <<'\n';
    }

   return 0;
}
