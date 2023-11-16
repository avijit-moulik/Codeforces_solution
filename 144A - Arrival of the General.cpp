
#include <bits/stdc++.h>

using namespace std;

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

// #define int long long
#define pb push_back
#define ph push_heap
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define F0R(i, a) FOR(i, 0, a)
#define ROF(i, a, b) for (int i = (b)-1; i >= (a); --i) // loops
#define R0F(i, a) ROF(i, 0, a)
#define rep(a) F0R(_, a)
#define each(a, x) for (auto &a : x)
#define forn(i, x, n) for (int i = x; i < n; i++)
#define formi(i, x, n) for (int i = x; i < n; i--)

using ll = long long;
using db = long double; // or double,
using str = string;

#define vi vector<int>
#define vpp vector<pair<int, int>>
#define vs vector<string>
#define vll vector<long long>
#define ss second
#define ff first

int mf()
{

  int n, min, max, minima, maxima;
  cin >> n;

  int a[n];

  forn(i, 0, n)
  {
    cin >> a[i];
  }

   min = a[0];
  minima = 0;
  max = a[0];
  maxima = 0;

  forn(i, 0, n)
  {
    if (min >= a[i])
    {
      min = a[i];
      minima = i;
    }
    if (max < a[i])
    {
      max = a[i];
      maxima = i;
    }
  }

  if (minima < maxima)
  {

    cout << ((n - 1) - minima + maxima - 1);
  }
  else
  {

    cout << ((n - 1) - minima + maxima);
  }

  return 0;
}

int main()
{

  std::ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  mf();

  return 0;
}
