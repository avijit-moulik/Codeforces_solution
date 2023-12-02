#include <bits/stdc++.h>
#define arrayInput              \
    long long int n;            \
    cin >> n;                   \
    long long int a[n];         \
    for (int i = 0; i < n; i++) \
        cin >> a[i];
#define test  \
    int t;    \
    cin >> t; \
    while (t--)
#define print(a) cout << a << "\n";
#define dprint(a, b) cout << a << " " << b << endl;
#define nd &&
#define rr ||
#define ek ==
#define nek !=
#define lli long long int
#define asort(a, n) sort(a, a + n);
#define dsort(a, n) sort(a, a + n, greater<int>())
#define yesPrint cout << "YES" << endl;
#define noPrint cout << "NO" << endl;
#define dPrint(a, b) cout << a << " " << b << "\n";
#define aeprint(a) cout << a << " ";
#define line cout << "\n";
#define maxArray(a, n) *max_element(a, a + n)
#define minArray(a, n) *min_element(a, a + n)
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);                \
    cout.tie(NULL)

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

#define FOR(i, a, b) for (int i = (a); i <= (b); ++i)
#define F0R(i, a) FOR(i, 0, a)
#define ROF(i, a, b) for (int i = (b)-1; i >= (a); --i)
#define R0F(i, a) ROF(i, 0, a)
#define rep(a) F0R(_, a)
#define each(a, x) for (auto &a : x)
#define forn(i, x, n) for (int i = x; i < n; i++)
#define formi(i, x, n) for (int i = x; i < n; i--)
using ll = long long;
using db = long double; // or double,

#define vi vector<int>
#define vpp vector<pair<int, int>>
#define vs vector<string>
#define vll vector<long long>
#define ss second
#define ff first
using namespace std;

int main()
{
    fast;
    //================================================================= =========
    int a, b, c;
    set<int> n;
    cin >> a;
    cin >> b;

    forn(i, 0, b)
    {
        int x{0};
        cin >> x;
        n.insert(x);
    }
    cin >> c;
    forn(i, 0, c)
    {
        int x{0};
        cin >> x;
        n.insert(x);
    }
    if (n.size() == a)
    {
        cout << "I become the guy.\n";
    }
    else
    {
        cout << "Oh, my keyboard!\n";
    }

    //============================================================================
    return 0;
}
