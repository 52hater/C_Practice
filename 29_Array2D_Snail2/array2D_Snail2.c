#include <stdio.h>

/* for���� ����� int[5][5] �迭�� ������ ���� �����ϴ� ���α׷��� �ۼ�.

	1  2  3  4  5
	10 9  8  7  6
	11 12 13 14 15
	20 19 18 17 16
	21 22 23 24 25

*/

int main(void) {

	int arrayList[5][5] = { 0 };
	int cnt = 0;
	int flag = 1; // �̷������� flag ���� �� ���� ��

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			// 1�̸� ������ ����
			if (flag) {
				arrayList[i][j] = ++cnt;
			}
			else {
				arrayList[i][4 - j] = ++cnt; // *** �������� ���� ***
			}
		}
		// �ѹ� ���� ����(���η����� ����) �÷��װ��� �ٲ�� > �׷� 0�̶� 1�̶� ��������
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