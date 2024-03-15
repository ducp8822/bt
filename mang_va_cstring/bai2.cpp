#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int k=s.size();
    for (int i=0;i<k;i++){
        if(s[i]!=s[k-i-1]){
            cout<<"No";
            exit(0);
        }
    }
    cout<<"Yes";
}