#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long a[200][200];
    memset(a,0,sizeof(a));

    int cnt = 1;
    for(int i = 1; i <= n; i++)
        a[i][1] = 1;
    for(int i = 2; i <= n; i++)
    {
        for(int j = 2; j <= n; j++)
        {
            a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
        
        }
    }
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
            if(a[i][j] != 0)
                cout << a[i][j] << " ";
        cout << endl;
    }
}