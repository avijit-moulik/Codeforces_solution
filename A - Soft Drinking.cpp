#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n, k, l, c, d, p, nl, np, t, s, le;

    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    t = (k * l) / nl;
    s = p / np;
    le = c * d;
    cout << min(min(t, le), s) / n << endl;
}
