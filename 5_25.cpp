#include<bits/stdc++.h>

using namespace std;

int main()
{
	
	int t; cin >> t;
	
	while(t--)
	{
		
		int n; cin >> n;
		
		
		
		vector<int> dp(n + 1, 0);
		
		dp[0] = 1, dp[1] = 1;
		
		for(int i = 2; i <= n; i++)
		{
			dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
		}
		
		cout << dp[n] << endl;
	
		
	}	
}
