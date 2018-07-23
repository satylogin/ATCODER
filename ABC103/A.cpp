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
 
int main()
{
	ios_base::sync_with_stdio(false);cout.tie(0);cin.tie(0);
 
	int i, j, k, x, y;
	int a, b, c;
	cin >> a >> b >> c;
	x = max(a, max(b, c));
	y = min(a, min(b, c));
	cout << x-y << endl;
 
	return 0;
}
