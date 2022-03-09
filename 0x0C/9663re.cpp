#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
const double PI = acos(-1);

int n,col[16]={0,},cnt=0;

bool check(int x){
  for(int j=1; j<x; j++){ // x보다 작아야 되는게 x번째 줄에 두었으므로 x보다 윗줄에 있는 것만 비교 해야한다...
    if(col[x]==col[j] || (x-j)==abs(col[x]-col[j])) return false;
  }
  return true;
}

void func(int x){
  if(x==(n+1)){
    cnt++;
    return;
  }
  for(int i=1; i<=n; i++){
    col[x]=i;
    if(check(x)) func(x+1);
    // check 함수 없이 해보려 했으나 false 조건을 만들어도 밖에 func(x+1) 넣어버리면 false 조건도 실행이 됨
    // 따라서 따로 함수를 만들어야 한다...
  }
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
  cin >> n;
  func(1);
  cout << cnt << '\n';
	return 0;
}
