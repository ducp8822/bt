#include<bits/stdc++.h>
using namespace std;
// char a1[];
// char a[1] = “abcd";
// char a[4] = “abcd"
 char a[6] = "abcd";
 char a1[]="abcd";
int main()
{
    // char a1[];
    // char a2[1] = “abcd";
    // char a[4] = “abcd"
    char a[6] = "abcd";
    char a1[]="abcd";
    cout<<a<<endl;
    for (int i=0;i<(int)sizeof(a);i++){
        cout<<a[i];
    }
    cout<<endl<<sizeof(a1)<<endl;
    cout<<a1<<endl;
    for (int i=0;i<(int)sizeof(a1);i++){
        cout<<a[i];
    }
}