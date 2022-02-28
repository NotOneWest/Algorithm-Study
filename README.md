# Algorithm-Study
* [실전 알고리즘 강의](https://blog.encrypted.gg/919?category=773649)를 공부하여, 여러 알고리즘들을 익히고 [문제집](https://github.com/encrypted-def/basic-algo-lecture/blob/master/workbook.md)들을 풀어본다.

### 진행 방법

* 각 강좌에 해당하는 내용을 공부한 후 문제를 푸는 방식으로 진행.
* 이전에 풀었던 문제가 있더라도 다시 푸는 것으로 정함. ( 스스로 생각하기에 너무 쉬운 내용 제외 )
* 이전에 풀었던 문제들을 다시 푸는 경우 강좌에 맞는 알고리즘 및 자료 구조를 사용
* 부족한 경우 해당 강좌에 맞는 백준 문제를 찾아 추가로 공부

### 강의 목록

| 번호 | 주제 | 진행도 |
| :--: | :--: | :--: |
| 0x00 | 오리엔테이션 | PASS |
| 0x01 | 기초 코드 작성 요령 I | PASS |
| 0x02 | 기초 코드 작성 요령 II | PASS |
| 0x03 | 배열 | PASS |
| 0x04 | 연결 리스트 | O |
| 0x05 | 스택| O |
| 0x06 | 큐 | O |
| 0x07 | 덱 | O |
| 0x08 | 스택의 활용(수식의 괄호 쌍) | O |
| 0x09 | BFS | O |
| 0x0A | DFS | - |
| 0x0B | 재귀 | - |
| 0x0C | 백트래킹 | - |
| 0x0D | 시뮬레이션 | - |
| 0x0E | 정렬 I | - |
| 0x0F | 정렬 II | - |
| 0x10 | 다이나믹 프로그래밍 | - |
| 0x11 | 그리디 | - |
| 0x12 | 수학 | - |
| 0x13 | 이분탐색 | - |
| 0x14 | 투 포인터 | - |
| 0x15 | 해시 | - |
| 0x16 | 이진 검색 트리 | - |
| 0x17 | 우선순위 큐 | - |
| 0x18 | 그래프 | - |
| 0x19 | 트리 | - |
| 0x1A | 위상 정렬 | - |
| 0x1B | 최소 신장 트리 | - |
| 0x1D강 | 다익스트라 알고리즘 | - |
| 0x1E강 | KMP 알고리즘 | - | 
| 0x1F강 | 트라이 | - |
| 부록 1 | 동적 배열 | - |
| 부록 2 | 비트마스킹 | - |
| 부록 3 | union find | - |
| 부록 4 | 다이나믹 프로그래밍 심화 | - |

* _(BFS 마지막 1문제 비트 마스킹 공부 이후)_

### 기본 소스 코드 설정
~~~
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
	return 0;
}
~~~
