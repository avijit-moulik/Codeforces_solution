#include <bits/stdc++.h>
using namespace std;
int main()
{
        int t, x, n[100], even, odd;
        cin >> t;
        for (int i = 0; i < t; i++)
        {
                cin >> n[i];
                if (n[i] % 2 == 0)
                {
                        even++;
                }
                else
                {
                        odd++;
                }
                for (int i = 0; i < t; i++)
                {
                        if (even > odd)
                        {
                                if (n[i] % 2 != 0)
                                {
                                        x = i;
                                }
                        }
                        else
                        {
                              if (n[i]%2 == 0)
                              {
                                 x = i;
                              }
                               
                        }
                }
        }
        cout << x+1 << "\n";
}
