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
        int n, m, u, x, y;
        cin >> n >> m >> u;
        vector<bool> check(n + 1, 1);
        vector<vector<int>> a(n + 1);
        stack<int> st;
        while (m--)
        {
            cin >> x >> y;
            a[x].push_back(y);
            //a[y].push_back(x);
        }
        for (int i = 1; i <= n; i++)
            sort(a[i].begin(), a[i].end());
        st.push(u);
        check[u] = 0;
        cout << u << " ";
        while (st.size())
        {
            u = st.top();
            st.pop();
            for (int i = 0; i < a[u].size(); i++)
            {
                int v = a[u][i];
                if (check[v])
                {
                    cout << v << " ";
                    check[v] = 0;
                    st.push(u);
                    st.push(v);
                    break;
                }
            }
        }
        cout << endl;
    }
	return 0;
}
