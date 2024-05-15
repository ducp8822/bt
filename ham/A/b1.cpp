#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[]={1,2,3};
    char b[]={'a','b','c'};
    for (int i=0;i<=2;i++){
        cout<<&a[i]<<" "<<endl;
    }
    for (int i=0;i<=2;i++){
        cout<<(void*)&b[i]<<" "<<endl;
    }
    return 0;
    // đối với mảng int thì mỗi phần tử cách nhau 4 byte mảng char thì cách nhau 1 byte
}