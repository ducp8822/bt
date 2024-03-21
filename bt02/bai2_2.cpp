#include <bits/stdc++.h>
using namespace std;

long long m(int x,int y)
{
    long long mu=1;
    for (int i=1;i<=y;i++){
        mu=mu*x;
    }
    return mu;
}
int main()
{
    int x,y;
    cin>>x>>y;
    cout<<m(x,y)<<" "<<pow(x,y);
}