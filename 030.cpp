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
	while (t--){
        string s;
        int k;
        cin >>k >>s;
        int n = s.size();
        f(i,0,n-1){
            char l = s[n-1];
            int vt=n-1;
            for(int j = n-1; j > i && k > 0; --j){
                if(l < s[j]) l = s[j], vt=j;
            }
            if(l > s[i] && k > 0) swap(s[i],s[vt]),k--;
        }
        cout <<s <<'\n';

	}
	return 0;
}
