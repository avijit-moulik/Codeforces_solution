#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <cmath>
#include <cstdio>
using namespace std;
int main(){
  int n;
  int x,y,z;
  int xsum(0), ysum(0), zsum(0);
  
  cin >> n;
  while (n--)
  {
    cin >> x >> y>> z;

     xsum += x;
     ysum += y;
     zsum += z;
  }
  if (xsum==0 && ysum==0 && zsum== 0)
  {
    cout << "YES";

  }
  else
  cout << "NO";
 
}
