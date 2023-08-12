#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<algorithm>
#include<cmath>
#include<cstdio>


using namespace std;

int main()
{
  int r,n,k;
  cin >> n >> k;
  for (int i = 1; i <= k; i++)
  {
      r=n%10;
      if (r==0)
      {
         n/=10;
      }
      else
   
      n-=1;
     
  
  
      
  }
  
   cout << n;
   return 0;
}
