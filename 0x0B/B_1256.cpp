#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
const double PI = acos(-1);
const ll MAX = 1000000000;
ll dp[201][201];

void com(){
	for(int i=0; i<=200; i++){
		for(int j=0; j<=i; j++){ // n,m 이 자연수라 0을 안넣어도 될꺼라는 실수를 했었음. 
			if(i==j || j==0) dp[i][j]=1;
			else{
				dp[i][j] = min(dp[i-1][j-1] + dp[i-1][j], MAX);  
			} // MAX 보다 큰 수가 들어가면 계산하다가 long long 범위를 벗어날 수 있음을 인지하지 못함.  
		}
	}
}

int main(){
	int n,m; 
	ll k; cin >> n >> m >> k;
	com();
	if(k>dp[n+m][n]) cout << -1;
	else{
		string s;
		while(n!=0 && m!=0){
			if(k>dp[n+m-1][m]){ // 중복조합이기 때문에 n+m-1.C.m 을 n 으로 실수해 계속 틀림.
			// n+1 이 아니라 m을 사용해야 하는 이유: z 일때만 k 에서 빼주고, m이 변화하기 때문? (아직 완벽 이해 X)
				s+='z';
				k-=dp[n+m-1][m]; // 생각하지 못했던 것. 
				m--;
			}
			else{
				s+='a';
				n--;
			}
		}
		if(n==0){
			for(int i=0; i<m; i++) s+='z';
		}
		else for(int i=0; i<n; i++) s+='a';
		cout << s;
	}
	return 0;
}
// 'a' 가 들어갈땐 앞에서 시작해서 k의 변화가 없어도 되지만
// 'z' 일땐 뒤에서 시작했으니 그 다음 경우의 수 만큼 k 에서 빼줘야한다. 
