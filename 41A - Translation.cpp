#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <vector>

using namespace std;
int main()

{
    string a, b;

    cin >> a >> b;
    reverse(a.begin(), a.end());
    if (a == b)
    {
        cout << "YES";
    }
    else
        cout << "NO";
}
