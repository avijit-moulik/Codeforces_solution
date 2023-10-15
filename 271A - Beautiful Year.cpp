#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  for (int i = 0; i < 1000; i++)
  {
    n++;
    int a = (n / 1000) % 10;
    int b = (n / 100) % 10;
    int c = (n / 10) % 10;
    int d = (n % 10);
    if (n != b && n != c && n != d && n != a && a != c && a != b && b != d && a != d && c != b && c != d)
    {
      break;
    }
  }
  cout << n;
}
