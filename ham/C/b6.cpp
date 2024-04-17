#include <bits/stdc++.h>
using namespace std;

int ucln(int x,int y){
    while(y!=0){
        int tmp=y;
        y=x%y;
        x=tmp;
    }
    return x;
}
int main()
{
    int x,y;
    cin>>x>>y;
    cout<<ucln(x,y);
}