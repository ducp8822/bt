#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i;
    cin>>i;
    cout<<i;
    while(i>=0) {
        int k; cin >>k;
        if(k!=i)
            cout<<" "<<k;
        i=k;
    }
}
