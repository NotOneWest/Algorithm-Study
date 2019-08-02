#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
const double PI = acos(-1);

int main(){
	int a, b, c; cin >> a >> b >> c;
	string sum = to_string(a*b*c);
	int num[10]={0,};
	for(int i=0; i<sum.size(); i++) num[sum[i]-'0']++;
	for(int i=0; i<10; i++) printf("%d\n", num[i]);
	return 0;
}

