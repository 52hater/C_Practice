#include <stdio.h>

/* ����ڷκ��� 1~9 ������ ������ �Է� �޾� �� ����ŭ
   '*'�� ����ϴ� ���α׷��� �ۼ�.
   ����� �Է��� ������ �Ѿ�� ������ ����.
   *(asterisk / �ֽ��͸���ũ)�� �� �࿡ �̾ ����ϰ�
   ��ü ����� ������ ����*/

int main(void) {

	int input = 0;
	scanf_s("%d", &input);

	if (input < 1 || input > 9) {
		puts("1~9 ������ �Է��Ͻÿ�");
		return 0;
	}

	// ������ �־����� �򰥸��� ������ �ؿ� �ص� �������
	int i = 0;

	while (i < input) {
		//putchar('*');
		printf("*\t");
		i++;
	}
	//puts("");
	putchar('\n');

	return 0;
}