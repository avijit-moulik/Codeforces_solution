#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n, m, c{0};
    char a;
    cin >> n >> m;

    for (int i = 0; i < n * m; i++)

    {
        cin >> a;
        if (a == 'W' || a == 'B' || a == 'G')
        {

            c++;
        }
    }
    if (c == n * m)
    {
        cout << "#Black&White";
    }
    else
        cout << "#Color";
}
