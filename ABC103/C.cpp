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
 
ll A[3005];
 
int main()
{
	ios_base::sync_with_stdio(false);cout.tie(0);cin.tie(0);
 
	ll n, i, j, k;
	cin >> n;
	ll ans = 0;
	for (i = 0; i < n; ++i) {
			cin >> k; ans += k-1;
	}
	cout << ans << endl;
 
	return 0;
}
