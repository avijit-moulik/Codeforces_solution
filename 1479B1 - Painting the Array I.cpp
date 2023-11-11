#include <bits/stdc++.h>

typedef double long dl;
typedef float fl;
typedef long long int ln;

using namespace std;
int main()
{
  ln t, c1{-1}, c2(-1);
  cin >> t;
  ln x = t;
  ln arr[t];
  for (ln i = 0; i < t; i++)
  {
    cin >> arr[i];
  }
  for (ln i = 0; i < t; i++)
  {
    if (arr[i] != c1 && arr[i] != c2)
    {
      if (i < t - 1 && arr[i + 1] == c1)
      {
        c1 = arr[i];
      }
      else
      {
        c2 = arr[i];
      }
    }
    else if (arr[i] != c1 && arr[i] == c2)
    {
      c1 = arr[i];
    }
    else if (arr[i] != c2 && arr[i] == c1)
    {
      c2 = arr[i];
    }
    else
    {
      x--;
    }
  }
  cout << x;
}
