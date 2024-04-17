#include <bits/stdc++.h>
using namespace std;

int rnd(double x){
    return static_cast<int> (x+0.5);
}

int main()
{
    double x;
    cin>>x;
    cout<<fixed<<setprecision(2)<<rnd(x);
}