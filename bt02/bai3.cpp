#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    int dem=1;
    for (int i=1;i<=n;i++){
        for(int j=i;j<n;j++){
            cout<<" ";
        }
         for(int k=1;k<=dem;k++){
            cout<<"*";
        }
        dem+=2;
        cout<<endl;
    }
}