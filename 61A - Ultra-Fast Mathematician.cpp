#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    string b;
    cin >> a;
    cin >> b;
    int i;
    int n = a.size();
    for (int i = 0; i < n; i++)
    {
        if (a[i] == b[i])
        {
            cout << '0';
        }
        else if (a[i] < b[i] || a[i] > b[i])
        {
            cout << "1";
        }
    }
}
