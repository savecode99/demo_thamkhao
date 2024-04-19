#include <bits/stdc++.h>

using namespace std;

long long mod = 1e9 + 7;



int main() {
	
	int t; cin >> t;
	
	while(t--)
	{
		
	
    
    int n; cin >> n;
    
    int a[n];
    
    for(int &x : a) cin >> x;
    
    sort(a, a + n);
    
    int res = n;
    
    for(int i = n / 2 - 1, j = n - 1; i >= 0 && j >= n / 2; )
    {
    	if(a[j] >= 2 * a[i])
    	{
    		--res;
    		i--; --j;
		}
		else --i;
	}
	
	cout << res << endl;
	
	}
	
	return 0;
}
