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
long long Find(long long pos, long long n, long long ctr)
{
	if (pos & 1)
		return 1;
	if (pos == ctr)
		return (n % 2);
	if (pos > ctr)
		return Find(pos - ctr, n / 2, ctr / 2);
	return Find(pos, n / 2, ctr / 2);
}
int main()
{
    faster();
    //freopen("input.txt","r", stdin);
    //freopen("output.txt","w", stdout);
   int t;
   cin >>t;
   while(t--){
        long long n, l, r;
		cin >> n >> l >> r;
		long long ctr = pow(2, (long long)log2(n)), ans = 0;
		for (long long i = l; i <= r; i++)
			ans += Find(i, n, ctr);
		cout << ans << "\n";
   }

   return 0;
}
