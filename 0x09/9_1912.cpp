#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
const double PI = acos(-1);

int dp[100001], num[100001];

int main(){
	int n; cin >> n;
	for(int i=1; i<=n; i++) cin >> num[i];
	int maximum=-1000;
	dp[1]=num[1];
	for(int i=2; i<=n; i++){
		dp[i]=max(num[i],dp[i-1]+num[i]); 
		// �� ���ϴٰ� �ȴ��ϴ°�  �� ũ�ٸ�
		//�� �ڸ��� �ִ� ���� ������ ���ذ��� ��ġ �ʱ�ȭ. 
		maximum=max(dp[i],maximum);
	}
	maximum=max(dp[1],maximum); // ���� ó�� ������ �ȴ��ϴ°� �ִ��� �� ����. 
	cout << maximum;
	return 0;
}

