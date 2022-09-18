#include <iostream>
using namespace std;
int main(void)
{
    int a, b, c, f;
    int g[5] = {0};
    cin >> a >> b >> c;
    g[0] = (a + b * c);
    g[1] = a * (b + c);
    g[2] = a * b * c;
    g[3] = (a + b) * c;
    g[4] = a + b + c;
    f = g[0];
    for (int i = 0; i < 5; i++)
    {
        if (g[i] > f)
        {
            f = g[i];
        }
    }
    cout << f;
    return 0;
}
