#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<algorithm>
#include<cmath>
#include<cstdio>


using namespace std;
int main()
{
   int k,n,w;
   int count= 0;
   int  sum = 0;
   cin >> k >> n >> w;
 
   
	 for (int i = 1; i <= w ; i++)

   {
		sum = sum+(i*k);
		
   }
	if (sum <= n)
	{
		cout << "0";
	}
	else
	cout << sum - n;
   
   
  
   
}
