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
        int s, t;
        cin >> s >> t;
        pair<int, int> u;
        u.fi = s;
        u.se = 0;
        map<int, int> mp;
        queue<pair<int, int>> q;
        q.push(u);
        while (q.size()){
            u = q.front();q.pop();
            if (u.fi == t){
                cout << u.se <<'\n';
                break;
            }
            if (u.fi <= t && !mp[u.fi * 2]){
                mp[u.fi * 2]++;
                q.push({u.fi * 2, u.se + 1});
            }
            if (u.fi > 1 && !mp[u.fi - 1]){
                mp[u.fi - 1]++;
                q.push({u.fi - 1, u.se+ 1});
            }
        }
	}

   return 0;
}
