#include <bits/stdc++.h>
using namespace std;

int main()

{
    int a[4]={1,2,3,4};
    //cout<<a[-1]; in ra 0;
    //cout<<a[4]; in ra 1;
    //cout<<a[5]; in ra 0;
    int arr[3][3];

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 6; j++){
            arr[i][j] = 99;
        }
    }

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 6; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}