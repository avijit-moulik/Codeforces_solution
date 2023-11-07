#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n, t;
   cin >> t;
   while (t--)
   {
      cin >> n;
      string s;

      cin >> s;
      if (s[n - 1] == 'A')
      {
         cout << "A\n";
      }
      else if(s[n-1]=='B')
      {
         cout << "B\n";
      }
   }
}
