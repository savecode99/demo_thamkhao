#include <bits/stdc++.h>
using namespace std;
#define ll long long 

ll MOD = 1e9 + 7;


long long Exa(long long a)
{
	if(a == 0) return 1;
	if(a == 1) return 2;
	
	int pi = Exa(a / 2);
	
	if(a % 2) return 2 * pi * pi;
	
	else return pi * pi;
}

ll Exu(ll a, ll b)
{
	ll k = Exa(a) / 2;
	
	if(b == 1) return 1;
	
	if(b == k) return a;
	
	else if(b > k) return Exu(a - 1, 2 * k - b);
	
	else return Exu(a - 1, b); 	
}

int main()
{
	int t; cin >> t;
	
	while(t--)
	{
		ll a, b; cin >> a >> b;	
		cout << Exu(a, b) << endl;
		
	}
	
	return 0;
}
