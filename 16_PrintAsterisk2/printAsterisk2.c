#include <stdio.h>

/* 5�� 5�� �簢���� *�� ����ϴ� ���α׷��� �ۼ�.
   �ݵ�� for���� ��ø�ϴ� ������ ����. */

int main(void) {

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("* ");
		}
		putchar('\n');
	}

	return 0;
}