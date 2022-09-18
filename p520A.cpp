#include <iostream>
#include <string>
using namespace std;
int main(void)
{
    int n;
    string s;
    int f = 0;
    cin >> n;
    cin >> s;
    if (n < 26)
    {
        cout << "NO";
    }
    else
    {
        for (int i = 65; i <= 90; i++)
        {
            for (int a = 0; a < n; a++)
            {
                s[a] = toupper(s[a]);
                if (s[a] == i)
                {
                    f++;
                    break;
                }
            }
        }
        if (f == 26)
        {
            cout << "YES";
        }
        else
            cout << "NO";
    }
    return 0;
} 
