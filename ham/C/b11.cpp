#include <bits/stdc++.h>
using namespace std;

vector <int> DeToBi(int x)
{
    vector <int> v;
    while(x!=0){
        int k=x%10;
        x=x/10;
        v.push_back(k);
    }
    return v;
}

int main()
{
    int x;
    vector <int> v =DeToBi(x);
    for (auto x:v){
        cout<<x;
    }
}