#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
const double PI = acos(-1);

int main(){
	int N;
	scanf("%d", &N);
	
	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
			if(j<=i) printf("*");
		}
		if(i<N-1) printf("\n");
	}
	
	return 0;
}

