#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll chuyendoi(string s)
{
	long long ans = 0;
	long long base = 1;
	
	for(int i = (int)s.size() - 1; i >= 0; i--)
	{
		if(s[i] == '1')
		{
			ans += base;
		}
		base *= 2;
	}
	
	return ans;
	
}


int main()
{
    int t; cin >> t;
    while(t--)
    {
    	string s1, s2; cin >> s1 >> s2;
    	
    	
    	ll a = chuyendoi(s1);
    	
    	ll b = chuyendoi(s2);
    	
    	cout << a * b << endl;
    	
    	
	}
    
    return 0;
}
