#include <bits/stdc++.h>

typedef long long int ln;
using namespace std;
int main()
{
  ln n, c;
  cin >> n;
  ln s1, s2;
  ln arr[n];
  for (ln i = 0; i < n; i++)
  {
    cin >> arr[i];
    s1 += arr[i];
  }
  s1 = s1 / 2;
  sort(arr, arr + n);
  for (ln i = n - 1; i >= 0; i--)
  {
    s2 += arr[i];
    c++;

    if (s2 > s1)
    {

      break;
    }
  }
  cout << c;
}
