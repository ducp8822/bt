#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin>>n;
    vector<int> v;
    for (int i=0;i<n;i++){
        int k;
        cin>>k;
        v.push_back(k);
    }  
    sort(v.begin(),v.end());
    for (auto &i:v){
        cout<<i<<" ";
    }
    return 0;
}
