#include <stdio.h>

/* for���� ����� int[5] �迭�� ����� �� �� ���� ū ���� ã�� ����ϴ� ���α׷��� �ۼ�.
   �ִ��� ����� ������ int nMax�� ����. */

int main(void) {

	int arr1[5] = { 50, 40, 10, 50, 20 };

	int nMax = arr1[0]; // �긦 for�� ���ο� �ʱ�ȭ�� ��Ű�� �����ɶ����� 50���� �ʱ�ȭ �ǰ���

	for (int i = 0; i < 5; i++) {
		if (arr1[i] > nMax) {
			nMax = arr1[i];
		}
	}

	printf("max : %d\n", nMax);

	return 0;
}