#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int k=gcd(a,b);
    a=a/k;
    b=b/k;
    cout<<a<<"/"<<b;
}