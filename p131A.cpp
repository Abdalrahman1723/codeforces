#include <iostream>
using namespace std;
int main(void)
{
    char str[101], u;
    bool c = true;
    cin >> str;
    for (int i = 1; i < strlen(str); i++)
    {
        if (islower(str[i]))
        {
            c = false;
        }
    }
    if (c == true)
    {
        for (int j = 0; j < strlen(str); j++)
        {
            if (islower(str[j]))
                u = toupper(str[j]);
            else
                u = tolower(str[j]);
            cout << u;
        }
    }
    else
        cout << str;
    return 0;
}
