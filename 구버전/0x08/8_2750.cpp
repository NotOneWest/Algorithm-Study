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
	int num[n]={0,};
	for(int i=0; i<n; i++) scanf("%d", &num[i]);
	sort(num,num+n);
	for(int i=0; i<n; i++) printf("%d\n", num[i]);
	return 0;
}
