#include <bits/stdc++.h>
typedef long long int ln;
using namespace std;
int main()
{
	string s;
	int c;
	cin >> s;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] >= 33 && s[i] <= 126)
		{
			if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9' )
			{
				c++;
			}
		}
	}
	if (c != 0)
	{
		cout << "YES";
	}
	else
		cout << "NO";
}
