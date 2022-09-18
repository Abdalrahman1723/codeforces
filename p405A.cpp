#include <iostream>
#include <algorithm>
using namespace std;
int main(void)
{
    int n[101], c;
    cin >> c;
    for (int i = 0; i < c; i++)
    {
        cin >> n[i];
    }
    sort(n, n + c);
    for (int i = 0; i < c; i++)
    {
        cout << n[i] << " ";
    }

    return 0;
}
