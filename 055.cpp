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

struct MaTran
{
    long long c[2][2];
    MaTran()
    {
        c[0][0]=0;
        c[0][1]=1;
        c[1][0]=1;
        c[1][1]=1;
    }
};

MaTran operator * (MaTran a, MaTran b)
{
    MaTran res;
    for (int i=0; i<=1; i++)
        for (int j=0; j<=1; j++)
        {
            res.c[i][j] = 0;
            for (int k=0; k<=1; k++)
                res.c[i][j] = (res.c[i][j]+a.c[i][k]*b.c[k][j])%MOD;
        }
    return res;
}

MaTran powermod (MaTran a, long long n)
{
    if (n==1)
        return a;
    if (n%2!=0)
        return powermod(a,n-1)*a;
    MaTran tmp = powermod(a,n/2);
    return tmp*tmp;
}

int main()
{
    long long n, t;
    cin >> t;
    while(t--){
    cin >> n;
    MaTran A;
    A = powermod(A,n);
    cout << A.c[0][1] <<'\n';}
    return 0;
}
