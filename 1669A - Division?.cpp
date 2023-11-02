#include <bits/stdc++.h>

using namespace std;
int main()
{
  int n,a;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >>a;
    if (a<=1399)
    {
      cout <<"Division 4\n";
    }
    else if (a<=1599)
    {
      cout << "Division 3\n";
    }
    else if (a<=1899)
    {
      cout << "Division 2\n";
    }
    else if (a>=1900)
    {
      cout << "Division 1\n";
    }
  }
  
}
