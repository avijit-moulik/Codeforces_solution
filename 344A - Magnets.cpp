#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n[100000], t, i{0}, c{0};
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n[i];
    }
  for (int i = 0; i<t; i++)
    {
        if (n[i] != n[i + 1])
        {
            c++;
        }
    }
    cout << c;
}
