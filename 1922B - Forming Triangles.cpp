#include <bits/stdc++.h>


#define sz(x) int((x).size())
#define bg(x) begin(x)
#define rall(x) x.rbegin(), x.rend()
#define sor(x) sort(all(x))
#define rsz resize // vectors
#define ins insert // oops size(x), rbegin(x), rend(x)
#define pb push_back
#define eb emplace_back
#define ft front()
#define bk back()
using namespace std;

long long factorial3(long long num)
{
    return (num * (num - 1) * (num - 2)) / 6;
}

long long factorial2(long long num)
{

    return (num * (num - 1)) / 2;
}

void mf()
{

    long long num;

    cin >> num;

    vector<int> array(num + 1, 0);

    for (long long i = 0; i < num; i++)
    {

        long long x;

        cin >> x;

        array[x]++;
    }

    long long result = 0;

    long long previous = 0;

    for (long long i = 0; i <= num; i++)
    {

        if (array[i] >= 3)
        {

            result += factorial3(array[i]);
        }

        if (array[i] >= 2)
        {

            result += factorial2(array[i]) * previous;
        }

        previous += array[i];
    }

    cout << result << endl;
}

int main()
{

    ios::sync_with_stdio(false);

    cin.tie(NULL);

    cout.tie(0);

    long long t;

    cin >>t;

    while (t--)
    {

        mf();
    }

    return 0;
}
