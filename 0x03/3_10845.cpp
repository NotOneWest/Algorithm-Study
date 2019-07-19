#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end();

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
const double PI = acos(-1);

const int MX = 10000007;
int q[MX];
int head;
int tail;

void push(int x){
	q[tail] = x;
	tail++;
}

void pop(){
	if(head != tail){
		printf("%d\n", q[head]);
		head++;
	}
	else printf("-1\n");
}

int main(){
	int n; cin >> n;
	for(int i=0; i<n; i++){
		string s; cin >> s;
		if(s == "push"){
			int x; cin >> x;
			push(x);
		}
		else if(s == "pop") pop();
		else if(s == "size") printf("%d\n", tail-head);
		else if(s == "empty"){
			if(head == tail) printf("1\n");
			else printf("0\n");
		}
		else if(s == "front"){
			if(head != tail) printf("%d\n", q[head]);
			else printf("-1\n");
		}
		else{
			if(head != tail) printf("%d\n", q[tail-1]);
			else printf("-1\n");
		}
	}
	return 0;
}
