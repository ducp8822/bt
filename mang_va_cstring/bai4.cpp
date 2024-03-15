#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    char s[100][100];string b[100][100];
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cin>>s[i][j];
        }
    }
    int dem=0;
     for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            if(s[i][j]!='*'){
                if(s[i-1][j-1]=='*' && i>0 && j>0) dem++;
                if(s[i-1][j]=='*' && i>0) dem++;
                if(s[i][j-1]=='*' && j>0) dem++;
                if(s[i+1][j+1]=='*') dem++;
                if(s[i+1][j]=='*') dem++;
                if(s[i][j+1]=='*') dem++;
                if(s[i+1][j-1]=='*' && j>0) dem++;
                if(s[i-1][j+1]=='*' && i>0) dem++;
                b[i][j]=to_string(dem);
                dem=0;
            }else b[i][j]='*';
        }
    }    
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
}