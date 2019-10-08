#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
const double PI = acos(-1);

int dp[1001], num[1001]; 

int main(){
	int n; cin >> n;
	for(int i=1; i<=n; i++) cin >> num[i];
	dp[1]=1;
	for(int i=2; i<=n; i++){
		dp[i]=1; // 최소 1개이기 때문에 초기화 해줘야함. 
		for(int j=1; j<i; j++){
			if(num[i]>num[j]){ // 작은 원소가 있다면, 1이 추가되야함. 
				dp[i]=max(dp[j]+1,dp[i]); // 이떄 이전에서 최대 개수에서 추가되야한다. 
			}
		}
	}
	int maximum=0;
	for(int i=1;i<=n;i++) maximum=max(maximum,dp[i]);
	cout << maximum;
	return 0;
}

