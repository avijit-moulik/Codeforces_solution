#include <iostream>
using namespace std;
int main()
{
   int  a, b, c, x, cnt=0;
   cin >> x;
   for (int i = 0; i < x; i++)
   {
      cin >> a >> b >> c;
      if (a==1&&b==1&&c==1||a==1&&b==1&&c==0||a==0&&b==1&&c==1||a==1&&b==0&&c==1)
      {
         cnt=cnt+1;
      }
   }

   cout << cnt << endl;
}
