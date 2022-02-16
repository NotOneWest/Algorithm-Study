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
  string t,a; cin >> t >> a;
  deque<char> left,right;
	int start=0, end=a.length()-1;
	while(start<=end){ // 앞에서 삭제 뒤에서 삭제만 생각하고 다시 돌아가는 부분 구현이 부족했었음.
		// 2.처음 등장 삭제
		for(start; start<=end; start++){ // int i 선언해서 하니 start가 계속 안바뀌는 현상 있었음
			if(left.size()<(t.length()-1)) left.pb(a[start]);
			else{
				int flag=0;
				if(t[t.size()-1]==a[start]){
					for(int j=1; j<t.length(); j++){
						if(left[left.size()-j]==t[t.length()-1-j]) flag=1;
						else{
							left.pb(a[start]);
							flag=0;
							break;
						}
					}
					if(flag==1){
						for(int j=1; j<t.length(); j++) left.pop_back();
						start++;
						break;
					}
				} else left.pb(a[start]);
			}
		}
		//4.마지막 등장 삭제
		for(end; end>=start; end--){ // int i 선언해서 하니 end가 계속 안바뀌는 현상 있었음
			if(right.size()<(t.length()-1)) right.push_front(a[end]);
			else{
				int flag=0;
				if(t[0]==a[end]){
					for(int j=1; j<t.length(); j++){
						if(right[j-1]==t[j]) flag=1;
						else{
							right.push_front(a[end]);
							flag=0;
							break;
						}
					}
					if(flag==1){
						for(int j=1; j<t.length(); j++) right.pop_front();
						end--;
						break;
					}
				} else right.push_front(a[end]);
			}
		}
	}
	//병합 및 추가 삭제
	string answer;
	for(int i=0; i<left.size(); i++) answer+=left[i];
	for(int i=0; i<right.size(); i++) answer+=right[i];
	while(answer.find(t)!=-1){ // 문자열에서 특정 문자열 찾아 첫번쨰 index 반환 없으면 -1
		answer.erase(answer.find(t), t.size()); // index부터 길이만큼 제거
	}
	cout << answer << "\n";
	return 0;
}
