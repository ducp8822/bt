#include <bits/stdc++.h>
using namespace std;

void trim_right(char a[]) {
    int len = 0;
    while (a[len] != '\0') {
        len++;
    }
    int i = len - 1;
    while (i >= 0 && a[i] == ' ') {
        a[i] = '\0';
        i--;
    }
}

int main(){
    char a[100];
    cin >>a;
    trim_right(a);
    cout <<a;
}