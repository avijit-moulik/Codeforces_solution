#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <cmath>
#include <cstdio>
using namespace std;
int main(){
  int a;
  int c=0;
  cin >>a;
  int n[a];
  for (int i = 0; i < a; i++)
  {
    cin >>n[i];
  }
  int max = n[0];
  int min = n[0];
  for (int i = 0; i < a; i++)
  {
    if ( max < n[i])
    {
        max= n[i];
        c++;
    }
   if (min>n[i])
   {
    min = n[i];
    c++;
   }
    
  }
  
    cout << c;
}
