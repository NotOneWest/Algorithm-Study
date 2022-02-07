#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
const double PI = acos(-1);

int num[301][301];

int main(){
	int n,m; cin >> n >> m;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=m;j++){
			cin >> num[i][j];	
		}
	}
	int k; cin >> k;
	for(int i=0; i<k; i++){
		int a,b,x,y; cin >> a >> b >> x >> y;
		if(a==x && b==y) cout << num[a][b] << '\n';
		else if(b==y){
			int sum=0;
			for(int i=a; i<=x; i++) sum+=num[i][b];
			cout << sum<<'\n';
		}
		else if(x==a){
			int sum=0;
			for(int i=b; i<=y; i++) sum+=num[a][i];
			cout << sum << '\n';
		}
		else{
			int sum=0;
			for(int i=a; i<=x; i++){
				for(int j=b; j<=y; j++) sum+=num[i][j];
			}
			cout << sum << '\n';
		}
	}
	return 0;
}

