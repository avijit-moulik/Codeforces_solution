#include<iostream>
using namespace std;
int main(){
	int n,k,i;
	int l[100];
	int counter = 0;
	cin >> n >> k;
	for ( i = 0; i < n; i++)
	{
		cin >> l[i];
		for ( i = 0; i < n; i++)
		{
			if (l[i] >= l[k-1] )
			{
				if (l[i]>0)
				{
					counter ++;
				}
					else{
					counter= counter+0;}	
			}
			
			
		}
		cout << counter;
		
	}
	
}
