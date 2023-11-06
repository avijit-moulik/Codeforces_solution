#include <bits/stdc++.h>
typedef long long int ln;
using namespace std;
int main()
{
        ln n, h, c;
        cin >> n >> h;
        ln arr[1000];
        for (ln i = 0; i < n; i++)
        {
                cin >> arr[i];
                if (arr[i] > h)
                {
                        c += 2;
                }
                else
                {
                        c++;
                }
        }
        cout << c;
        return 0;
}
