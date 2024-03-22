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
	int n;
    cin >> n;
    string s;
    vector<vector<int>> a(n + 1, vector<int>(n + 1, 0));
    cin.ignore();
    for (int i = 1; i <= n; i++)
    {
        getline(cin, s);
        s += ' ';
        int k = 0;
        for (int j = 0; j < s.size(); j++)
        {
            if (s[j] >= '0' && s[j] <= '9')
                k = k * 10 + s[j] - '0';
            else
            {
                a[i][k] = 1;
                k = 0;
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
	return 0;
}
