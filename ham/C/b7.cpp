#include<bits/stdc++.h>
using namespace std;

void cach(int m){
    for (int i=1;i<=m;i++){
        cout<<" ";
    }
}

void sao(int n){
    for (int i=1;i<=n;i++){
        cout<<"*";
    }
}


int main()
{
    int x;
    cin>>x;
    int k=x-1;
    for (int i=1;i<=x;i++){
        cach(k);
        sao(2*i-1);
        cout<<endl;
        k--;
    }
}