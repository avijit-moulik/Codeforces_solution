#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,n;
    cin >> n;
    int arr;
    for (int i = 0; i < n; i++)
    {
        cin >> arr;
        b +=arr;
    }
    if (b>0)
    {
        cout <<"HARD";
    }
    else 
    {
        cout <<"EASY";
    }
    
    
}
