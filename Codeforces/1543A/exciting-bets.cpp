#include <bits/stdc++.h>

using namespace std;

#define nimble ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define Fill(a,b)  memset(a,b,sizeof(a))

// DEBUG FUNCTIONS START
void __print(int x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}
template<typename T, typename V> void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T> void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void deb() {cerr << "\n";}
template <typename T, typename... V> void deb(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; deb(v...);}
// DEBUG FUNCTIONS END

const int INF = 0x3f3f3f3f;
const ll INFL = 0x3f3f3f3f3f3f3f3fLL;
const ll MOD = 1e9 + 7;

void solve() {
  ll a,b; cin >> a >> b;

  if (a == b) {
    cout << 0 << " " << 0 << endl;
  } else {

    ll ex = abs(a-b);
    ll temp = a % ex;
    ll steps = min(ex-temp, temp);

    cout << ex << " " << steps << endl;
  }

}

int main() {
  nimble;
  // freopen("input", "r", stdin);
  // freopen("output", "w", stdout);

  int tc; cin >> tc;
  while (tc--) {
    // cout << "Case #" << t << ": " << endl;
    solve();
  }

  return 0;
}
