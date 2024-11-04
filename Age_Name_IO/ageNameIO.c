#include <stdio.h>

/* 사용자로부터 이름과 나이를 키보드로 입력 받아
   출력하는 프로그램을 작성.
   
   이름은 gets_s(), 나이는 scanf_s() 함수로 입력 받고
   printf() 함수로 출력*/

int main(void) {

	int age = 0;
	char name[32] = { 0 };

	// %d로 받고 어디 저장? age에 저장 > scanf 함수는 매개변수가 메모리의 주소가 잡혀야 됨.
	// 키보드 입력을 했는데 엔터가 남아서(\n이 남아서 문제가 된다) > 정수입력 직후에 한 글자 제거를 해줘라(%*c)
	// 그러면 \n이 제거가 됨.
	// 안해주면 몇 세 만 나오고 그 뒤에 누구(name)가 안나옴.
	scanf_s("%d%*c", &age);

	// name에다가 저장해달란얘기, 사이즈는 메모리의 크기가 계산되어서 나옴(sizeof연산자임)
	gets_s(name, sizeof(name));

	// 몇 세 누구
	printf("%d세 %s\n", age, name);
	
	return 0;
}