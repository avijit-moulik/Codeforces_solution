#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <cmath>
#include <cstdio>
using namespace std;
int main(){
  int n;
  cin>> n;
  int x[n];
  double  sum =0.0;
  for (int i = 0; i < n; i++)
  {
    cin >> x[i];
    sum +=x[i];
  }
   
  cout << sum/(double)n;
  
}
 
