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

ll findx(ll a[], ll n, ll k){
	ll l = 0, r =n-1;
	ll res = -2;
	while(l <= r){
		ll mid = l +(r-l)/2;
		if(a[mid] <= k){
			res = mid;
			l = mid+1;
		}
		else{
			r = mid-1;
		}
	}
	return res + 1;
}
int main()
{
    faster();
    //freopen("input.txt","r", stdin);
    //freopen("output.txt","w", stdout);

    int t;
    cin >>t;
    while(t--){
        ll n, k;
        cin >>n >>k;
        ll a[n];
        f(i,0,n-1) cin >>a[i];
        sort(a,a+n);
        cout <<findx(a,n,k) <<'\n';
    }

   return 0;
}
