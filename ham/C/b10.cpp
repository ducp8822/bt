#include <bits/stdc++.h>
using namespace std;

void print(int a[],int n){
    for (int i=1;i<=n;i++){
        for (int j=i+1;j<=n;j++){
            for (int k=j+1;j<=n;j++){
                if((a[i]+a[j]+a[k])%25==0){
                    cout<<a[i]<<" "<<a[j]<<" "<<a[k]<<endl;
                }
            }
        }
    }
}

int main()
{
    srand(time(NULL));
    int a[100];
    int n;
    cin>>n;
    for (int i=1;i<=n;i++){
        a[i]=rand()%(50);
    }
    print(a,n);
}