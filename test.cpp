#include <bits/stdc++.h>
using namespace std;

int main()
{
    set <int> a ;
    int n;
    cin>>n;
    for (int i=0;i<n;i++){
        int k;
        cin>>k;
        a.insert(k);
    }
    if(a.size()!=n){
        cout<<"No";
    } else cout<<"Yes";
}