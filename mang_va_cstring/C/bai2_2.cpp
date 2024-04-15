#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[1000];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    int max=-9999,t1=0,t2=0;
    int min=999999;
     for (int i=0;i<n;i++){
        if(max<a[i])
            max=a[i];
        if(min>a[i])
            min=a[i];
        if(a[i]%2==0)
            t1+=a[i];
        else t2++;
    }
    cout<<min<<endl<<max<<endl<<t1<<endl<<t2;
    
}