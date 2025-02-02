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
        ll a[n] = {}, MAX = 0;
        for(int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++){
            int pos1 = i, pos2 = i, s1 = 0, s2 = 0;
            while (a[pos1] >= a[i] && pos1 >= 0){
                pos1--;
                s1++;
            }
            while (a[pos2] >= a[i] && pos2 < n){
                pos2++;
                s2++;
            }
            MAX = max(MAX, a[i] * (s1 + s2 - 1));
        }
        cout << MAX << "\n";
    }

   return 0;
}
