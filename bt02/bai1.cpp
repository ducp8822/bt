#include <bits/stdc++.h>
using namespace std;
bool kt(int n){
    for (int i=2;i<=sqrt(n);i++){
        if(n%i==0)
            return false;
    }
    return true;
}

int main()
{
    int n;
    cin>>n;
    if(kt(n)==true)
        cout<<"Yes";
    else
        cout<<"No";
}