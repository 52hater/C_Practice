#include <stdio.h>

/* ����ڷκ��� �� ������ �Է� �޾� �ִ��� ��ȯ�ϴ� �Լ��� �ۼ�.
   ����� �Է��� �޴� �κа� �ִ��� ����ϴ� �ڵ�� �ݵ�� ���� �Լ��� �и�. 
*/

int maximum(int input1, int input2, int input3) {
	
	// nMax�� 0���� �ʱ�ȭ�ϸ� �ȵ� >> �Է°� �� ��� ����ó�� �Ұ�
	// nMax�ʱⰪ�� input1���� ������ ���ѵ� �� ������ �ȳ���
	// �׳� �� �������̿� �ִ밪�� ���ϴ� �����ε� ��..
	// �׳� �ʱⰪ�� 1�� ��Ƴ��� 2���� ���ϰ� 3�̶��� ���ϰ� �ִ밪�϶����� ������ �������ְ�
	// ������ �ϳ� ����� < ���⿡ ������ ����ġ�� input123 �������� ���Ϸ��ϴµ�
	// �ʿ��� ������ ����°� �׻� ������

	// ���� �����Լ�(�ݷ�)�� ���� ������ �����Ϸ����� ���� �ݸ��Լ��� ���¸� �˾ƾ��ϱ⶧����
	// >> �̰� �ٺ����� �Լ��������� �ϴ� �����ε�, �����Ϸ����� �Լ��� ���縦 �˸��� ��.
	// �����Ϸ��� ������ �Ʒ��� ������ �ϴµ� �������ٰ� ���� �𸣴� �Լ��ݸ��� �߰ߵǸ� �����Ͽ����� ������
	// �ݸ��Լ��� ������ ���� ������� (int maximum(int a, int b, int c);) �̷��� �Լ������� �ؾ���.
	// �Լ����������� �� �� �Ű������� �̸��� ��������(�翬�� �ڷ����� �������)
	// int maximum(int, int, int); > �̰͵� �ùٸ� �Լ�����������.
	// ������ �Լ����������� �ߴ�? �׷��� �����Ϸ��� �װ� ����
	// �� maximum()�� �Լ�����. �Ű������� int ������ int�� ��ȯ�ϴ� �Լ�����. ��� �ƴ� ��.
	
	// �ٵ� �߿��Ѱ� C�����Ϸ��� ������ �Ʒ��� �ڵ带 �о�� ������
	// �����Լ��� �Ʒ��� �ְ� �ݸ��� ���κ��� ���� ������ ȣ�� ������ �̹� �Լ��� �� �о����Ƿ� ���������� ���ʿ���
	// �׷��� �ݸ��� ���ʿ� �δ°� ���� �ٶ�����.
	
	// �Լ��� ui / ��� �и��ϰڴ�? > �Լ��������� ����
	// ������� �ݸ��� ������Է��� �޴� �Լ���?
	// ��������ǲ ���� �̸� ����, �Լ� ��ȯ���� ��������?, �Ű���������� �����ڷ������� �������������?
	// 2��? 1���� ���� ���� ������? �̷������� ������ �� �ؼ� ���踦 �س��� ���� �ڵ带 ¥. �ڵ��� �� ������ c���� �����ϴ� ��.
	// �Լ����� = �Լ��ñ״�ó ����� ��.
	
	// �ݸ��� ���ʿ� �θ� ������ ���ص� �Ǵ°��� �ƴ϶�
	// ������ �ݸ��� ���� �Լ������� �������� �ٿ����� �Լ��� ���Ǳ��� �� ��Ȳ.
	// �����ڸ� int add(a, b) {}�� int a = 0; �� ����. �Լ��� ����� ���Ǹ� ���ÿ� �� ��Ȳ.
	// *** ���� �ְ� ���Ǵ� ������ ��ũ���� ����. (error LNK Ȯ���� �� ���� �ܺ� ��ȣ/�ܺ� ���� ��¼�� ��.) ***
	// ���� �޽��� ���� ���� ã�� �� �־�� ��õ���� �ڵ忡�� ��Ƴ���
	 
	// ��ũ��?
	// �ҽ��ڵ� -> �����ڵ� (������) / �����ڵ� -> �������� (��ũ) / �� ���� ������ ��ģ�� (����)

	int nMax = input1;

	if (input2 > nMax) {
		nMax = input2;
	}
	if (input3 > nMax) {
		nMax = input3;
	}

	return nMax;
}

int main(void) {
	
	int max = 0;
	int a = 0, b = 0, c = 0;

	scanf_s("%d%d%d", &a, &b, &c);

	max = maximum(a, b, c);

	printf("%d\n", max);

	return 0;
}