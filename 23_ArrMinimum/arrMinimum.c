#include <stdio.h>

/* for���� ����� int[5] �迭�� ����� �� �� ���� ���� ���� ã�� ����ϴ� ���α׷��� �ۼ�.
   int[0] ��ҿ� �ּڰ��� ����� �� �ֵ��� ����.
   �� �迭 ��Ҹ� ���ϴ� �������� �� �迭 ����� ���� ����Ἥ ������� �ʵ��� ��ȯ(��ȯ? > �ӽú��� �����).
   (((�Ź߲� ����))) */

int main(void) {

	int arrList[5] = { 30, 40, 10, 50, 20 };

	for (int i = 0; i < 5; i++) {
		if (arrList[0] > arrList[i]) {
			int tmp = arrList[0];
			arrList[0] = arrList[i];
			arrList[i] = tmp;
		}
	}

	for (int i = 0; i < 5; i++) {
		printf("%d\t", arrList[i]);
	}

	puts("");
	return 0;

	// �̷��� 10 40 30 50 20 �� ����? �� ������? > "����"
}