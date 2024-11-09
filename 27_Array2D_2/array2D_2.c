#include <stdio.h>

/* for���� �̿��� int[5][5] �迭�� ������ ���� �����ϴ� ���α׷��� �ۼ�.

   1  2  3  4  5
   6  7  8  9  10
   11 12 13 14 15
   16 17 18 19 20
   21 22 23 24 25

*/

// �߿��� ������

int main(void) {

	// �����Ѱǵ� �� ǥ���� �ڵ����� �ȵɱ�
	// for��ø�� ����� ������ �ȵ��־�׷�

	int arrayList[5][5] = { 0 };
	int cnt = 0;

	// arrayList[i][j]�� �ּ��ݾ�, �׷��� ó���� arrayList[0][0]�� 1�� ���°���
	/* ������� ����
	   
	    i = 0, j = 0: ++cnt�� 1�� �ǰ� arrayList[0][0] = 1
		i = 0, j = 1: ++cnt�� 2�� �ǰ� arrayList[0][1] = 2
		i = 0, j = 2: ++cnt�� 3�� �ǰ� arrayList[0][2] = 3
		i = 0, j = 3: ++cnt�� 4�� �ǰ� arrayList[0][3] = 4
		i = 0, j = 4: ++cnt�� 5�� �ǰ� arrayList[0][4] = 5

		i = 1, j = 0: ++cnt�� 6�� �ǰ� arrayList[1][0] = 6
		i = 1, j = 1: ++cnt�� 7�� �ǰ� arrayList[1][1] = 7
		i = 1, j = 2: ++cnt�� 8�� �ǰ� arrayList[1][2] = 8
		i = 1, j = 3: ++cnt�� 9�� �ǰ� arrayList[1][3] = 9
		i = 1, j = 4: ++cnt�� 10�� �ǰ� arrayList[1][4] = 10

		�̷������� ���� �Ǵ°���

		arrayList[i][j] �� �迭 ��ü�� ���ϴ°� �ƴ϶� i��° �� j��° ���� ����Ű�� �ּҶ�°� ������

	*/

	// ���������� �ϸ� 0�� �ϴ� ���� �����ؼ� 01234 �� �ǰ���
	// ���������� �ؾ� 1�� �ϴ� ���ϰ� ������ 12345
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			arrayList[i][j] = ++cnt;
		}
	}

	// ���� ����ϴ� �ڵ带 �� ¥����
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%d\t", arrayList[i][j]);
		}
		puts("");
	}

	return 0;
}