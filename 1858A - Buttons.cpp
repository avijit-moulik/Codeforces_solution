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
   int a, b, c, t;
   cin >> t;
   for (int i = 0; i < t; i++)
   {
      cin >> a >> b >> c;

      if (a + c > b + c)
      {
         cout << "First\n ";
      }
      else if (a + c < b + c)
      {
         cout << "Second\n";
      }
      else
      {
         if ((a + b + c) % 2)
         {
            cout << "First\n";
         }
         else
         {
            cout << "Second\n";
         }
      }
   }
}
