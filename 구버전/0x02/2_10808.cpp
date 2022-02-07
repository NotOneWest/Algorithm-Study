#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end();

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
const double PI = acos(-1);

int main(){
	string s; cin >> s;
	int alpabet[26]={0,};
	for(int i=0; i<s.size(); i++) alpabet[s[i]-'a']++;
	for(int i=0; i<26; i++) printf("%d ", alpabet[i]);
	return 0;
}
