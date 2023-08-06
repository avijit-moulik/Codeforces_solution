#include <iostream>
#include <string>
using namespace std;
int main()
{
  int x;
  int b = 0;
  string a;
  cin >> x;

  while (x--)
  {
    cin >> a;
    if (a[0, 1] == '+')
    {
      ++b;
    }
    else
      --b;
  }

  cout << b;
}
