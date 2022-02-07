#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end();

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
const double PI = acos(-1);

int main(){
	int t; cin >> t;
	for(int i=0; i<t; i++){
		string s; cin >> s;
		stack<char> st;
		int check=0;
		for(int j=0; j<s.length(); j++){
			if(s[j] == '(') st.push(s[j]);
			else{
				if(st.size() != 0) st.pop();
				else{
					check++;
					break;
				}	
			}
		}
		if(check == 0 && st.size() == 0) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
