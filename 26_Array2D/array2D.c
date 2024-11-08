#include <stdio.h>

/* 아래 배열 요소의 행, 열 총합을 다음과 같이 출력하는 프로그램 작성.
   
   10 20 30 60 
   40 50 60 150
   50 70 90 210

*/

// 어렵다 어려워...
// for중첩 계속 연습해야겠어
// 행 만들어주고 열 만들어주고 하는 식으로 접근했어
// rowSum같은 변수를 지정해주고 값을 대입하는 방식으로 해도 되겠지 근데 이게 더 깔끔한듯

int main(void) {

	int arrayList[3][4] = {
		{10, 20, 30},
		{40, 50, 60}
	};

	// 세번째행 만들어주고 열의 합(외부for문)
	for (int j = 0; j < 3; j++) {
		for (int i = 0; i < 2; i++) {
			arrayList[2][j] += arrayList[i][j];
		}
	}

	// 네번째열 만들어주고 행의 합(외부for문)
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			arrayList[i][3] += arrayList[i][j];
		}
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%d\t", arrayList[i][j]);
		}
		puts("");
	}

	return 0;
}