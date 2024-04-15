#include <bits/stdc++.h>
using namespace std;

bool kt(int n){
    int k=n,tmp=0;
    while (n!=0){
        tmp=tmp*10+n%10;
        n=n/10;
    }
    if(tmp==k) return true;
    return false;
}

int main()
{
   int t;
   cin>>t;
   while (t!=0){
    t--;
    int a,b;
    cin>>a>>b;
    int dem=0;
    for (int i=a;i<=b;i++){
        if(kt(i)==true) dem++;
    }
    cout<<dem<<endl;
   }
}