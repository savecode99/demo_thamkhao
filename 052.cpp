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

int convertToDecimal(string num, int K) {
    int decimal = 0;
    int power = 1;

    for (int i = num.length() - 1; i >= 0; i--) {
        int digit = 0;
        if (num[i] >= '0' && num[i] <= '9') {
            digit = num[i] - '0';
        } else {
            digit = num[i] - 'A' + 10;
        }
        decimal += digit * power;
        power *= K;
    }

    return decimal;
}


string convertFromDecimal(int num, int K) {
    string result = "";
    while (num > 0) {
        int digit = num % K;
        if (digit < 10) {
            result = char(digit + '0') + result;
        } else {
            result = char(digit - 10 + 'A') + result;
        }
        num /= K;
    }

    return result;
}


string add(string A, string B, int K) {
    int decimalA = convertToDecimal(A, K);
    int decimalB = convertToDecimal(B, K);
    int sum = decimalA + decimalB;
    string result = convertFromDecimal(sum, K);
    return result;
}

int main()
{
    faster();
    int t;
	cin >> t;
	while(t--){
        int k;
        string a, b;
        cin >>k >>a >>b;
        cout <<add(a,b,k) <<'\n';
	}

   return 0;
}
