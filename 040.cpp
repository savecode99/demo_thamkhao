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
    //freopen("input.txt","r", stdin);
    //freopen("output.txt","w", stdout);
    int t;
    cin >>t;
    while(t--){
        int n;
        cin >>n;
        int a[n+5];
        f(i,1,n) cin >>a[i];
        sort(a+1,a+n+1);
        ll ans2=0, ans1=0;
        for(int i = 1; i <= n; i+=2) ans1 = ans1*10+a[i];
        for(int i = 2; i <= n; i+=2) ans2 = ans2*10+a[i];
        cout <<ans1 + ans2 <<'\n';
    }

   return 0;
}
