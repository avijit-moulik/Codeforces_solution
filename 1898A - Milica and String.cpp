#include <bits/stdc++.h>

using namespace std;

int main()
{
 int t;
 cin >>t;
 while (t--)
 {
    int n;
    int k;
    cin >> n ;
    cin >> k;
    string s;
    cin >> s;
    int cb = 0;
    int lent = s.length();
    for (int i = 0; i < lent; i++)
    {
      if (s[i] == 'B')
      {
        cb++;
      }
      
      
    }
    if (cb == k)
    {
     cout <<0<<"\n";
    }
    else if (cb<k)
    {
      int c =0;
      for (int i = 0; i < lent; i++)
      {
        if (s[i]=='A')
        {
          c++;
        }
        if (c == k-cb)
        {
          cout << 1 <<"\n"<<i+1 <<" "<<"B\n";
          break;
        }
        
      }
      
    }
    else{
      int c =0;
      for (int i = 0; i < lent; i++)
      {
        if (s[i]=='B')
        {
         c++;
        }
        if (c == cb-k)
        {
          cout <<1 << "\n" <<i+1<<" "<<"A\n";
          break;
        }
        
      }
      
    }
    
    
 }
 

 

}
