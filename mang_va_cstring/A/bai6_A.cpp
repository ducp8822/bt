#include<bits/stdc++.h>
using namespace std;

void swap(int &a,int &b){
    int tmp=a;
    a=b;
    b=tmp;
}
void sapxep(int a[],int n){
    for (int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                swap(a[i],a[j]);
            }
        }
    }
}
int main()
{
    srand(time(NULL));
    int a[30];
    for (int i=0;i<30;i++){
        a[i]=rand()%31;
    }
    sapxep(a,30);
     for (int i=0;i<30;i++){
        cout<<a[i]<<" ";
    }
}