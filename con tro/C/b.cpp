#include <bits/stdc++.h>
using namespace std;

void delete_char(char a[], char c)
{
    char* ptr=a;
    while(*ptr != '\0')
    {
        if(*ptr == c )
        {
            char* tmp=ptr;
           while (*tmp != '\0')
           {
            *tmp = *(tmp + 1);
            tmp++;
           }
           *tmp= '\0';
        }else
        {
            ptr++;
        }
    }
}
int main()
{
    char s[]="123456";
    char c='1';
    delete_char(s,c);
    cout<<s;
}

