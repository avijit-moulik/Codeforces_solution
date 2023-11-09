#include <bits/stdc++.h>

#include <algorithm>
typedef long long int ln;
using namespace std;

int main()
{
	ln i, f, n, a, b;
	string s;
	while (getline(cin, s))
	{
		f = 0;
		for (i = 0; i < s.size(); i++)
		{
			if (s[i] == 'A' && s[i + 1] == 'B')
			{
				b = i;
				a = 1;
				break;
			}
		}
		if (a == 1)
		{
			for (i = b + 2; i < s.size(); i++)
			{
				if (s[i] == 'B' && s[i + 1] == 'A')
				{
					f = 1;
					break;
				}
			}
		}

		if (f == 0)
		{
			for (i = 0; i < s.size(); i++)
			{
				if (s[i] == 'B' && s[i + 1] == 'A')
				{
					b = i;
					a = 2;
					break;
				}
			}
			if (a == 2)
			{
				for (i = b + 2; i < s.size(); i++)
				{
					if (s[i] == 'A' && s[i + 1] == 'B')
					{
						f = 1;
						break;
					}
				}
			}
		}
		if (f == 1)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}
