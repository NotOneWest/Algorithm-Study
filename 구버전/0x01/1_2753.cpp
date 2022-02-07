#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
const double PI = acos(-1);

int main(){
	int year;
	cin >> year;
	if(year%400 == 0) printf("1");
	else if(year%4 == 0 && year%100 != 0) printf("1");
	else printf("0");
	return 0;
}

