#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	int t; cin >> t;
	
	while(t--)
	{
		int n; cin >> n;
		
		int a[n];
		
		for(int &x : a) cin >> x;
		
		int dp[n] = {0};
		
		stack<int> st;
		
		for(int i = n - 1; i >= 0; i--)
		{
			while(!st.empty() && st.top() <= a[i])
			{
				st.pop();
			}
			
			dp[i] = st.empty() ? -1 : st.top();
			
			st.push(a[i]);
		} 
		
		
		for(auto x : dp) cout << x << ' ';
		
		cout << endl;
		
	}
	
	
	
	
	
}
