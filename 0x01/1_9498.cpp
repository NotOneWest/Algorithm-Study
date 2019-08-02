#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
const double PI = acos(-1);

int main(){
	int score;
	scanf("%d", &score);
	
	if(score>89 && 101>score) printf("A");
	else if(score>79 && 90>score) printf("B");
	else if(score>69 && 80>score) printf("C");
	else if(score>59 && 70>score) printf("D");
	else printf("F");
	
	return 0;
}

