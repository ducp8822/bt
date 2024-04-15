#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[1000];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    double tb=0;
    for (int i=0;i<n;i++){
        tb=tb+double(a[i]);
    }
    tb=tb/double(n);
    double ps=0;
    for (int i=0;i<n;i++){
        ps=ps+(a[i]-tb)*(a[i]-tb);
    }
    ps=ps/double(n);
    cout<<fixed<<setprecision(2)<<ps;
}