#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
const double PI = acos(-1);

int main(){
	int n; cin >> n;
	vector<pii > v;
	for(int i=0; i<n; i++){
		int x,y; cin >> x >> y;
		v.pb(mp(y,x));
	}
	sort(all(v));
	for(auto i: v) cout << i.second << ' ' << i.first << '\n';
	return 0;
}

