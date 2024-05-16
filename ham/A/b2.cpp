#include <bits/stdc++.h>
using namespace std;

long long  factorial( int x)
{
    cout << "x = " << x << " at " << &x << endl;
    if(x==1)
        return 1;
    return factorial(x-1)*x;
}

int main()
{
    int n=5;
    cout<<factorial(n);
}
// địa chỉ và giá trị biến đều thay đổi