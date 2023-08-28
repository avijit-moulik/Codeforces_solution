#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <vector>
 

using namespace std;
int main()
{
    string a;
    int c1=0,c2=0;
    cin>>a;
    for(int i=0;i<a.length();i++)
    {
        if(a[i]==a[i+1])
        c1++;
        else
        c1=0;
        if(c1==6)
        {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
}
