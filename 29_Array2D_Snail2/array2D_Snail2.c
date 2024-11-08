#include <stdio.h>

/* for문을 사용해 int[5][5] 배열에 다음과 같이 저장하는 프로그램을 작성.

	1  2  3  4  5
	10 9  8  7  6
	11 12 13 14 15
	20 19 18 17 16
	21 22 23 24 25

*/

int main(void) {

	int arrayList[5][5] = { 0 };
	int cnt = 0;
	int flag = 1; // 이런식으로 flag 쓰는 건 자주 씀

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			// 1이면 무조건 실행
			if (flag) {
				arrayList[i][j] = ++cnt;
			}
			else {
				arrayList[i][4 - j] = ++cnt; // *** 보수개념 적용 ***
			}
		}
		// 한번 행이 돌면(내부루프가 돌면) 플래그값이 바뀌도록 > 그럼 0이랑 1이랑 뒤집히지
		flag = !flag;
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%d\t", arrayList[i][j]);
		}
		puts("");
	}

	return 0;
}