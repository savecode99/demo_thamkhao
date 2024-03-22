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
    while (t--)
    {
        int n, m, u, v, x, y, ok = 0;
        cin >> n >> m >> u >> v;
        string s;
        vector<bool> check(n + 1, 1);
        vector<vector<int>> a(n + 1);
        queue<pair<int, string>> st;
        while (m--)
        {
            cin >> x >> y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        st.push({u, to_string(u) + " "});
        check[u] = 0;
        while (st.size())
        {
            x = st.front().first;
            s = st.front().second;
            if (x == v)
            {
                ok = 1;
                cout << s << endl;
                break;
            }
            st.pop();
            for (int i = 0; i < a[x].size(); i++)
            {
                int y = a[x][i];
                if (check[y])
                {
                    check[y] = 0;
                    st.push({y, s + to_string(y) + " "});
                }
            }
        }
        if (ok == 0)
            cout << -1 << endl;
    }

	return 0;
}
