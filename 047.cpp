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
bool cmp(pair<int,int> a, pair<int,int> b){
    return a.se < b.se;
}
int main()
{
    faster();
    //freopen("input.txt","r", stdin);
    //freopen("output.txt","w", stdout);

    int t;
    cin >>t;
    while(t--){
        int n, ok=0;
        cin >>n;
        for(int i = 0; i < n/4; ++i){
            if((n - i*4)%7 == 0) {
                ok = 1;
                for(int j = 0; j < i; ++j) cout <<4;
                for(int j = 0; j < (n-i*4)/7; ++j) cout <<7;
                break;
            }
        }
        if(!ok) cout <<-1;
        cout <<'\n';
    }
   return 0;
}
