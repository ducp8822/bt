#include <bits/stdc++.h>
using namespace std;

int random(int x){
    return rand()%(x+1);
}

int main()

{
    srand(time(NULL));
    int x;
    cin>>x;
    cout<<random(x);
}