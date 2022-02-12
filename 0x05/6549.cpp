#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
const double PI = acos(-1);

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
  while(true){
    ll n; cin >> n;
    if(n==0) break;
    stack<pair<ll,ll> > s;
    ll ans=0;
    for(ll i=0; i<n; i++){
      ll h; cin >> h;
      int cur=i; // 최대 넓이는 (총 가로 길이 * 최소 높이) or (일정 높이가 가장 연속 된 사각형 넓이) or (가장 큰 높이)
      while(!s.empty() && s.top().first>=h){ // 가장 높은 높이를 ans에 저장하는 과정
        ans=max(ans, (i-s.top().second)*s.top().first);
        cur=s.top().second;
        s.pop();
      }
      s.push(mp(h,cur));
    }
    while(!s.empty()){ // 일정 높이가 가장 길게 연속 된 넓이 찾기
      ans=max(ans, (n-s.top().second)*s.top().first);
      s.pop();
    }
    cout << ans << '\n';
  }
	return 0;
}
