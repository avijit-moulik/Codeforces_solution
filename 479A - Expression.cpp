#include <bits/stdc++.h>

using namespace std;
int main()
{

    int a, b, c;
    cin >> a >> b >> c;
    int x = a + (b * c);
    int y = a * (b + c);
    int j = a * b * c;
    int k = (a + b) * c;
    int z = a + b + c;
    int g = (a * b) + c;
    cout << max(g, max(z, max(k, max(j, max(x, y)))));
}
