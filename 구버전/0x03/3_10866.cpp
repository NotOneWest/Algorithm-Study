#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end();

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
const double PI = acos(-1);

const int MX = 10000007;
int dq[MX];
int head=MX/2, tail=MX/2;

void push_front(int x){
	dq[head-1] = x;
	head--;
}

void push_back(int x){
	dq[tail] = x;
	tail++;
}

void pop_front(){
	if(head != tail){
		printf("%d\n", dq[head]);
		head++;
	}
	else printf("-1\n");
}

void pop_back(){
	if(head != tail){
		printf("%d\n", dq[tail-1]);
		tail--;
	}
	else printf("-1\n");
}

int main(){
	int n; cin >> n;
	for(int i=0; i<n; i++){
		string s; cin >> s;
		if(s == "push_front"){
			int x; cin >> x;
			push_front(x);
		}
		else if(s == "push_back"){
			int x; cin >> x;
			push_back(x);
		}
		else if(s == "pop_front") pop_front();
		else if(s == "pop_back") pop_back();
		else if(s == "size") printf("%d\n", tail-head);
		else if(s == "empty"){
			if(head == tail) printf("1\n");
			else printf("0\n");
		}
		else if(s == "front"){
			if(head != tail) printf("%d\n", dq[head]);
			else printf("-1\n");
		}
		else{
			if(head != tail) printf("%d\n", dq[tail-1]);
			else printf("-1\n");
		}
	}
	return 0;
}
