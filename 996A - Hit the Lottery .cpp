#include<bits/stdc++.h>
#include<cctype>
#define arrayInput long long int n; cin >> n; long long int a[n]; for(int i=0; i<n; i++) cin >> a[i];
#define test int t; cin >> t; while(t--)
#define iloop(a, n) for(int i=a; i<n; i++)
#define jloop(a, n) for(int j=a; j<n; j++)
#define dloop(a, n) for(int i=a; i>n; i--)
#define print(a) cout << a << "\n";
#define dprint(a, b) cout << a << " " << b << endl;
#define nd &&
#define rr ||
#define ek ==
#define nek !=
#define ll long long
#define lli long long int
#define asort(a, n) sort(a, a+n);
#define dsort(a, n) sort(a,a+n,greater<int>())
#define yesPrint cout << "YES" << endl;
#define noPrint cout << "NO" << endl;
#define dPrint(a, b) cout << a << " " << b << "\n";
#define aeprint(a) cout << a << " ";
#define line cout << "\n";
#define maxArray(a,n) *max_element(a, a+n)
#define minArray(a,n) *min_element(a, a+n)
#define fast  ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)

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

using namespace std;




void solve()
{

}

 
 



int main()
{
    fast;
    
    
    int n,count{0};
    cin >> n;



    count += n / 100;
    n %= 100;

    count += n / 20;
    n %= 20;

    count += n / 10;
    n %= 10;

    count += n / 5;
    n %= 5;

    count += n;

    cout << count;

    return 0;


}
