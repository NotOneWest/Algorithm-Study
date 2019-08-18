#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
const double PI = acos(-1);

int main(){
	int n,cnt=0; cin >> n;
	vector<bool> check(1001,true);
	check[1]=false;
	for(int i=2; i<=1000; i++){
		if(!check[i]) continue;
		for(int j=i*i; j<=1000; j+=i){
			check[j]=false;
		}
	}
	for(int i=0; i<n; i++){
		int k; cin >> k;
		if(check[k]) cnt++;
	}
	cout << cnt;
	return 0;
}

