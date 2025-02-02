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
string n, k;
bool check(string s){
    return (s.size() == n.size() && s <= n || s.size() < n.size());
}
int main()
{
    faster();
    //freopen("input.txt","r", stdin);
    //freopen("output.txt","w", stdout);

    int t;
	cin >> t;
	while(t--){
        cin >>n;
        stack<string> st;
        st.push("1");
        int cnt=0;
        while(st.size()){
            k = st.top(); st.pop();
            cnt++;
            if(check(k+"0")) st.push(k+"0");
            if(check(k+"1")) st.push(k+"1");
        }
        cout <<cnt <<'\n';
	}

   return 0;
}
