#include<bits/stdc++.h>

using namespace std;

void phai(int a[], int n, int G[])
{
    stack<int> st;
    
    for(int i = 0; i < n; i++)
    {
        while(!st.empty() && a[i] > a[st.top()])
        {
            G[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }
    while(!st.empty())
    {
        G[st.top()] = -1;
        st.pop();
    }
}

void trai(int a[], int n, int S[])
{
    stack<int> st;
    
    for(int i = 0; i < n; i++)
    {
        while(!st.empty() && a[i] < a[st.top()])
        {
            S[st.top()] = a[i];
            st.pop();
        }
        st.push(i);
    }
    while(!st.empty())
    {
        S[st.top()] = -1;
        st.pop();
    }
}


int main()
{
	int t; cin >> t;
	while(t--)
	{
		
	
	
    int n; cin >> n;
    int a[n], G[n], S[n];
    
    for(int &x : a) cin >> x;
    phai(a, n, G);
    trai(a, n, S);
    
    
    
    for(int i = 0; i < n; i++)
    {
        if(G[i] != -1)
        {
            cout << S[G[i]] << ' ';
        }
        else  cout << -1 << ' ';
        
    }
 	cout << endl;   
}
    
    
}
