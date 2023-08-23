#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <cmath>
#include <cstdio>
using namespace std;
int main(){
 string s,t;
 cin >> s;


  for (int i = 0; i < s.size(); i++)
  {
    if (s[i]=='A'|| s[i]=='E'|| s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='Y' || s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='y')
    {
       
      continue;
    }
    else
    {
      t +='.';
      
      t +=tolower(s[i]);;
    }
  }
   cout <<t;
}
 
