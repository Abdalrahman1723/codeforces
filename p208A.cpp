#include <iostream>
#include <string.h>
using namespace std;
int main(void)
{
    char str[201];
    cin >> str;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == 'W' && str[i + 1] == 'U' && str[i + 2] == 'B')
        {
            cout<<" ";
            i+=2;
        }
        else
            cout<<str[i];
    }

    return 0;
} 
