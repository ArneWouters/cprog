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
  int k,n,m; cin >> k >> n >> m;
  vector<int> a(n);
  vector<int> b(m);
  for (auto &x: a) cin >> x;
  for (auto &x: b) cin >> x;

  vector<int> seq{};

  int i = 0;
  int j = 0;

  for (int g = 0; g < m+n; g++) {
    if (i < n && a[i] == 0) {
      seq.push_back(0);
      i++; k++;
    } else if (j < m && b[j] == 0) {
      seq.push_back(0);
      j++; k++;
    } else if (i >= n) {
      if (b[j] > k) {
        cout << -1 << endl;
        return;
      }
      seq.push_back(b[j]);
      j++;
    } else if (j >= m) {
      if (a[i] > k) {
        cout << -1 << endl;
        return;
      }
      seq.push_back(a[i]);
      i++;
    } else if (a[i] > b[j]) {
      if (b[j] > k) {
        cout << -1 << endl;
        return;
      }
      seq.push_back(b[j]);
      j++;
    } else {
      if (a[i] > k) {
        cout << -1 << endl;
        return;
      }
      seq.push_back(a[i]);
      i++;
    }
  }

  for (const auto &x: seq) cout << x << " ";

  cout << endl;

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
