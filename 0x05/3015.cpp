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
  int n; cin >> n;
  ll ans=0;
  stack< pii > s; // 키, 같은 키인 사람 수
  for(int i=0; i<n; i++){
    int h; cin >> h;
    while(!s.empty() && s.top().first<h){
      ans+=s.top().second; // 이전에 있던 사람 수 더하기
      s.pop();
    }
    if(s.empty()) s.push(mp(h,1));
    else{
      if(s.top().first==h){
        pii now=s.top();
        s.pop();
        ans+=now.second;
        if(!s.empty()) ans++; // 같은 키인 사람 들어왔을 때 이전에 들어온 사람과 한쌍이룸 ... +1
        now.second++;
        s.push(now);
      }
      if(s.top().first>h){
        s.push(mp(h,1));
        ans++;
      }
    }
  }
  cout << ans << '\n';
	return 0;
}
