#include <bits/stdc++.h>

using namespace std;

long long mod = 1e9 + 7;




int main()
{
	int t; cin >> t;
	while(t--)
	{
		
	
	int k; string a, b; 
	
	cin >> k >> a >> b;
	
	while(a.size() > b.size()) b = "0" + b;
	while(b.size() > a.size()) a = "0" + a;
	
	string res = "";
	
	int nho = 0;
	
	int len = a.size();
	
	for(int i = len - 1; i >= 0; i--)
	{
		int viet = int(a[i] - '0') + int(b[i] - '0') + nho;
		
		res = char(viet % k + '0') + res;
		
		nho = viet / k;
	}
	
	if(nho > 0) res = char(nho + '0') + res;
	
	cout << res << endl;
	
	}
	
	return 0;
	
}
