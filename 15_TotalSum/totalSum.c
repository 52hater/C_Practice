#include <stdio.h>

/* 1~10������ ������ ����ϴ� ���α׷��� �ۼ�.
   while ���� for ������ ���� �ۼ��ϸ� �ݺ�ȸ���� 10ȸ�� ����.
   �ݵ�� ������ �����ϴ� ������ Ȱ���� ��. */

int main(void) {
	
	int i = 0, result = 0;

	for (i = 1; i <= 10; i++) {
		result += i;
	}
	printf("%d\n", result);

	while (i < 10) {
		result += i;
		i++;
	}
	printf("%d\n", result);

	return 0;
}