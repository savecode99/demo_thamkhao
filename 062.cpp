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
int a[105], b[105],n, k, ok, m, cnt;
void Try(int pos1, int pos2, int s){
    for(int i = pos1 + 1; i <= n; ++i){
        if(s + a[i] == k){
            ok=1;
            b[pos2+1] = a[i];
            if(pos2 + 2 == m) cnt++;
        }
        else if(s + a[i] < k){
            b[pos2+1] = a[i];
            Try(i, pos2+1, s + a[i]);
        }
    }
}
int main()
{
    faster();
    //freopen("input.txt","r", stdin);
    //freopen("output.txt","w", stdout);
    int t;
    cin >>t;
    while(t--){
        ok=0, cnt=0;
        cin >>n >> m>>k;
        for(int i = 1; i <= n; ++i) cin >>a[i];
        sort(a + 1, a + n + 1);
        Try(0,-1,0);
        cout <<cnt;
        cout <<'\n';
    }

   return 0;
}
