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
	cin >> t;
	while(t--){
        int n;
        cin >>n;
        int a[n+1], b[n+1];
        f(i,1,n) cin >>a[i]; sort(a+1,a+n+1,greater<int>());
        f(i,1,n) cin >>b[i]; sort(b+1,b+n+1);
        ll sum=0;
        f(i,1,n){
            sum += a[i]*b[i];
        }
        cout <<sum;
        cout <<'\n';

	}
   return 0;
}
