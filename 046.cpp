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
    cin >>t;
    while(t--){
        int n, m, s;
        cin >>n >>s >>m;
        if(s*m > (s-s/7)*n) {cout <<-1 <<'\n'; continue;}
        f(i,1,s-s/7){
            if(n*i >= s*m){
                cout <<i <<'\n';
                break;
            }
        }
    }
   return 0;
}
