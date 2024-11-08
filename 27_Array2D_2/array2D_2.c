#include <stdio.h>

/* for문을 이용해 int[5][5] 배열에 다음과 같이 저장하는 프로그램을 작성.

   1  2  3  4  5
   6  7  8  9  10
   11 12 13 14 15
   16 17 18 19 20
   21 22 23 24 25

*/

// 중요한 예제래

int main(void) {

	// 간단한건데 왜 표현이 코딩으로 안될까
	// for중첩이 제대로 연습이 안돼있어서그래

	int arrayList[5][5] = { 0 };
	int cnt = 0;

	// arrayList[i][j]가 주소잖아, 그래서 처음에 arrayList[0][0]에 1이 들어가는거지
	/* 순서대로 보면
	   
	    i = 0, j = 0: ++cnt는 1이 되고 arrayList[0][0] = 1
		i = 0, j = 1: ++cnt는 2가 되고 arrayList[0][1] = 2
		i = 0, j = 2: ++cnt는 3이 되고 arrayList[0][2] = 3
		i = 0, j = 3: ++cnt는 4가 되고 arrayList[0][3] = 4
		i = 0, j = 4: ++cnt는 5가 되고 arrayList[0][4] = 5

		i = 1, j = 0: ++cnt는 6이 되고 arrayList[1][0] = 6
		i = 1, j = 1: ++cnt는 7이 되고 arrayList[1][1] = 7
		i = 1, j = 2: ++cnt는 8이 되고 arrayList[1][2] = 8
		i = 1, j = 3: ++cnt는 9가 되고 arrayList[1][3] = 9
		i = 1, j = 4: ++cnt는 10이 되고 arrayList[1][4] = 10

		이런식으로 들어가게 되는거지

		arrayList[i][j] 가 배열 자체를 말하는게 아니라 i번째 행 j번째 열을 가리키는 주소라는걸 생각해

	*/

	// 후위증가로 하면 0을 일단 적고 시작해서 01234 로 되겠지
	// 전위증가로 해야 1을 일단 더하고 적으니 12345
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			arrayList[i][j] = ++cnt;
		}
	}

	// 먼저 출력하는 코드를 잘 짜놔라
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%d\t", arrayList[i][j]);
		}
		puts("");
	}

	return 0;
}