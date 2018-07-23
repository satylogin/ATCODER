#include <bits/stdc++.h>
 
using namespace std;
 
#define MOD 1000000007
#define ll long long int
#define ld long double
#define pb push_back
#define mkp make_pair
#define pii pair<int, int> 
#define pll pair<long long int, long long int>
#define sci(x) scanf("%d", &x)
#define scl(x) scanf("%lld", &x)
#define fi first
#define sc second
#define eps 1e-9
 
pii A[100005];
 
multiset<int> se;
 
int main()
{
	ios_base::sync_with_stdio(false);cout.tie(0);cin.tie(0);
 
	int n, m, i, j, k, x, y, z;
	cin >> n >> m;
	for (i = 0; i < m; ++i) cin >> A[i].fi >> A[i].sc;
	sort(A, A+m);
	int ans = 0;
	j = 0;
	for (i = 1; i <= n; ++i) {
		if (se.find(i) != se.end()) {
			ans += 1;
			se.clear();
		}
		while (j < m && A[j].fi == i) se.insert(A[j++].sc);
	}
	cout << ans << endl;
 
	return 0;
}
