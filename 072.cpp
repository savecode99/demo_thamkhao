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

int main()
{
    faster();
    //freopen("input.txt","r", stdin);
    //freopen("output.txt","w", stdout);

    int t;
    cin >>t;
    while(t--){
        int n;
        cin >> n;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        for (int i = 1; i < n; i += 2)
            b[i] = a[(i - 1) / 2];
        for (int i = 0; i < n; i += 2)
            b[i] = a[n - i / 2 - 1];
        for (int i = 0; i < n; i++)
            cout << b[i] << " ";
        cout<<'\n';
    }

   return 0;
}
