#include <iostream>
using namespace std;

void passByValue(int x) {
    cout << "Inside passByValue" << endl;
    cout << "Address of x inside function (before modification): " << &x << endl;
    x = 20;  // Thay đổi giá trị của x
    cout << "Address of x inside function (after modification): " << &x << endl;
    cout << "Value of x inside function: " << x << endl;
}

void passByReference(int &x) {
    cout << "Inside passByReference" << endl;
    cout << "Address of x inside function (before modification): " << &x << endl;
    x = 20;  // Thay đổi giá trị của x
    cout << "Address of x inside function (after modification): " << &x << endl;
    cout << "Value of x inside function: " << x << endl;
}

int main() {
    int a = 10;
    cout << "Address of a in main: " << &a << endl;
    cout << "Value (before passByValue): " << a << endl;
    passByValue(a);
    cout << "Value (after passByValue): " << a << endl << endl;

    int b = 10;
    cout << "Address of b in main: " << &b << endl;
    cout << "Value (before passByReference): " << b << endl;
    passByReference(b);
    cout << "Value (after passByReference): " << b << endl;

    return 0;
}
