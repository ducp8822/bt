#include<bits/stdc++.h>
using namespace std;

bool kt(double x,double y, double z){
    if(x+y>z){
        if(y+z>x){
            if(z+x>y)
                return true;
        }
    }
    return false;
}

string tg(double a,double b, double c){
    if (a == b && b == c)
        return "tam giac deu";
    else if (a == b || a == c || b == c) {
        if (pow(a, 2) + pow(b, 2) == pow(c, 2) || pow(a, 2) + pow(c, 2) == pow(b, 2) || pow(b, 2) + pow(c, 2) == pow(a, 2))
            return "tam giac vuong can";
        else
            return "tam giac can";
    }
    else if (pow(a, 2) + pow(b, 2) == pow(c, 2) || pow(a, 2) + pow(c, 2) == pow(b, 2) || pow(b, 2) + pow(c, 2) == pow(a, 2))
        return "tam giac vuong";
    else
        return "tam giac thuong";
}
int main()

{
    double a,b,c;
    cin>>a>>b>>c;
    
    if(kt(a,b,c)== true){
        cout<<fixed<<setprecision(2)<<a+b+c<<" ";
        cout<<tg(a,b,c);
    }else cout<<"Khong la tam giac";
}