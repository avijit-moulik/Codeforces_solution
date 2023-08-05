#include<iostream>
#include<string>
using namespace std;
int main(){
	int l;
	
	string s ;
	cin >>l;
	while (l--)
	{
		cin >> s;
		int a=0;
		if (s[0]=='y'||s[0]=='Y')
		{
			a++;
		}
		if (s[1]=='E'||s[1]=='e')
		{
			a++;
		}
		if (s[2]=='s'||s[2]=='S')
		{
			a++;
		}
		if (a==3)
		{
			cout << "YES\n";
		}
		
		else
		cout <<"NO\n";	
	}
	
	


}
