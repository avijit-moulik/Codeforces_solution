#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <cmath>
#include <cstdio>

using namespace std;

int main()
{
  string s;
  int a= 0, d = 0;
  int n;
  cin >> n >> s;
  for (int  i = 0; i < n; i++)
  {
      if (s[i]=='A' )
      {
         a++  ;
      }
      else if (s[i]=='D')
      {
         d++;
      }
  }
      if (a==d)
      {
         cout << "Friendship";

      }
      else if (a>d)
      {
         cout <<  "Anton" ;
      }
      
      else
      {
         cout <<  "Danik" ;
      }
      
  
  

 
   
}
