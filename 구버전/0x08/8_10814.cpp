#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
const double PI = acos(-1);

bool compare(pair<pii, string> a, pair<pii, string> b){
	if(a.first.second==b.first.second) return a.first.first<b.first.first;
	return a.first.second<b.first.second;
}

int main(){
	int n; cin >> n;
	vector<pair<pii, string> > v;
	for(int i=0; i<n; i++){
		int age;
		string name; cin >> age >> name;
		v.pb(mp(mp(i,age),name));
	}
	sort(all(v), compare);
	for(auto i: v) cout << i.first.second << ' ' << i.second << '\n';
	return 0;
}

