#include <iostream>
using namespace std;
int main(void)
{
    int n, s[5] = {0}, v, flag = 0;
    int cnt = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> v;
        s[v]++;
    }
    //------------//
    cnt = s[4] + s[3];
    //-----------//
        cnt += s[2] / 2;
    if (s[2] % 2 != 0)
    {
        cnt++;
        s[1] -=2;
    }
    //------------//
    if (s[3] <= s[1])
    {
        s[1] -= s[3];
    }
    else
        s[1] = 0;
    //------------//
    if (s[1] > 0 && s[1] % 4 == 0)
    {
        cnt += (s[1] / 4);
    }
    else if (s[1] > 0)
    {
        cnt += ((s[1] / 4) + 1);
    }
    cout << cnt;
    return 0;
}
