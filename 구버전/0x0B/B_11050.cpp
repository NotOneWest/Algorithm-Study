#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
const double PI = acos(-1);

int com(int n, int k){
	if(k==0) return 1;
	else{
		int res=1;
		for(int i=0; i<k; i++) res*=(n-i);
		for(int i=1; i<=k; i++) res=res/i;
		return res;
	}
} 

int main(){
	int n,k; cin >> n >> k;
	cout << com(n,k);
	return 0;
}

