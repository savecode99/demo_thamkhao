#include<bits/stdc++.h>
using namespace std;

void printMinNumberForPattern(string seq)
{
    int n = seq.length();
    if (n >= 9)
        return;
    vector<int> result(n + 1);
    for (int i = 0; i <= n; i++)
        result[i] = i + 1;
    for (int i = 0; i < n; i++)
    {
        if (seq[i] == 'D')
        {
            int j = i;
            while (seq[j] == 'D' && j < n)
                j++;
            reverse(result.begin() + i, result.begin() + j + 1);
            i = j;
        }
    }
    for (int i = 0; i <= n; i++)
        cout << result[i];
    cout << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        string S;
        cin >> S;
        printMinNumberForPattern(S);
    }
    return 0;
}
