#include <bits/stdc++.h>
using namespace std;

void reverse(char a[])
{
    char* start = a;
    char* end = a + strlen(a) - 1;
    while (start < end) {
        swap(*start, *end);
        start++;
        end--;
    }
}

int  main()
{
    char s[]="123456";
    reverse(s);
    cout<<s;
}