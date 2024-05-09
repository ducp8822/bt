#include <bits/stdc++.h>
using namespace std;
bool binary_search(int *a, int l, int r, int x) {
    while (l <= r) {
        int mid = (l + r)/2;
        if (a[mid] == x) return true;
        else if(a[mid]>x)r=mid-1;
        else l=mid+1;
    }
    return false;
}
int main() {
    const int size = 10;
    int arr[size] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int k;
    cin >> k;
    bool found=binary_search(arr,0,size-1,k);
    if (found) {
        cout << "Tim thay ";
    } else {
        cout << "Khong tim thay ";
    }

    return 0;
}
