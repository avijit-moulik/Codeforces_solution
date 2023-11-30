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


#define vi vector<int>
#define vpp vector<pair<int, int>>
#define vs vector<string>
#define vll vector<long long>
#define ss second
#define ff first
using namespace std;

void mf(){
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    FOR(i,0,n){
        cin>>v[i];
    }
    if(k == 1 && !is_sorted(v.begin(),v.end())){
        cout<<"NO\n";
    }
    else{
        cout<<"YES\n";
    }
    
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t =1;
    cin >> t;
    while(t--){
        mf();
    }

    return 0;
}
