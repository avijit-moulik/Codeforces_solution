#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <cmath>
#include <cstdio>
using namespace std;
int main()
{
  int n, a{1};
  

  cin >> n;
  cout << "I hate ";
  if (n > 1)
  {
    for (int i = 0; i < n-1; i++)
    {
      cout << " that ";
      if (a % 2 != 0)
      {
        cout << " I love ";
      }
      else
      {
        cout << " I hate ";
      }
      a++;
    }
  }

  cout << "it";
}
