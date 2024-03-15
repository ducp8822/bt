#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    int dem=9;
    for (int i=1;i<=n;i++){
         for(int k=1;k<=dem;k++){
            cout<<"*";
        }
        cout<<endl;
        for(int j=1;j<=i;j++){
            cout<<" ";
        }
        dem-=2;  
    }
}