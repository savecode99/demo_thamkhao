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
        int cnt=0;
        f(i,1,n){
            int x;
            cin >>x;
            if(x == 0) cnt++;
        }
        cout <<cnt <<'\n';
	}

   return 0;
}
