#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end();

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
const double PI = acos(-1);

int main(){
	int n, k; cin >> n >> k;
	queue<int> q;
	for(int i=1; i<=n; i++) q.push(i);
	string answer="<";
	while(1){
		if(q.size() == 1){
			answer+=to_string(q.front());
			break;
		}
		for(int i=0; i<k-1; i++){
			q.push(q.front());
			q.pop();
		}
		answer+=to_string(q.front());
		q.pop();
		answer+=", ";
	}
	answer+=">";
	printf("%s", answer.c_str());
	return 0;
}
