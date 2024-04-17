#include <bits/stdc++.h>
using namespace std;

int rnd(double x){
    int n1=ceil(x);
    int n2=floor(x);
    double x1=abs(n1-x),x2=abs(n2-x);
    if(x1>x2)
        return n2;
    else 
        return n1;
}

int main()
{
    double x;
    cin>>x;
    cout<<fixed<<setprecision(2)<<rnd(x);
}