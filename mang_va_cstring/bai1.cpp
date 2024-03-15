#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    set <int> s;
    for (int i=1;i<=n;i++){
        int k;
        cin>>k;
        s.insert(k);
    }
    if(s.size()!=n){
        cout<<"No";
    }else
        cout<<"Yes";
}