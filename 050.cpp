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
#define mod 123456789
using namespace std;
ll tinh(ll a, ll n){
    if(n == 0) return 1;
    ll tmp = tinh(a,n/2);
    if(n%2) return ((a*(tmp*tmp))%mod)%mod;
    return (tmp*tmp)%mod;
}
int main()
{
    faster();
    //freopen("input.txt","r", stdin);
    //freopen("output.txt","w", stdout);

    int t;
    cin >>t;
    while(t--){
        ll n;
        cin >>n;
        cout <<tinh(2,n-1) <<'\n';
    }
   return 0;
}
