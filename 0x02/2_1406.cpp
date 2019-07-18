#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end();

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
const double PI = acos(-1);

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	string s; cin >> s;
	list<char> l;
	int size = s.size(), n; cin >> n;
	for(int i=0; i<size; i++) l.pb(s[i]);
	auto t = l.end();
	for(int i=0; i<n; i++){
		char mode; cin >> mode;
		if(mode == 'P'){
			char c; cin >> c;
			l.insert(t, c);
		}
		else if(mode == 'L'){
			if(t != l.begin()) t--;
		}
		else if(mode == 'D'){
			if(t != l.end()) t++;
		}
		else if(mode == 'B'){
			if( t != l.begin()){
				auto temp = t;
				t--;
				l.erase(t);
				t = temp;
			}	
		}
	}
	for(auto i : l) cout << i <<"";
	return 0;
}
