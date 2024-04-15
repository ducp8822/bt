#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    int mp[10]={};
    memset(mp,0,sizeof(mp));
    for (int i=1;i<=n;i++){
        int k;
        cin>>k;
        mp[k]++;
    }
    for ( int i=0;i<10;i++){
        cout<<i<<" : "<<mp[i]<<endl;
    }
}