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
	cin >> t;
	while(t--){
        int n;
        cin >>n;
        queue<ll> q;
        q.push(9);
        while(q.size()){
            ll k = q.front(); q.pop();
            if(k % n == 0) {cout <<k <<'\n'; break;}
            q.push(k*10);
            q.push(k*10+9);
        }
	}

   return 0;
}
