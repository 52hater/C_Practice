#include <stdio.h>

/* 
	이벤트루프 > 메인함수에 ui 출력 및 사용자입력을 반복하는 구조 (이벤트 > 사용자입력이라고 보면 됨)
	보통 메뉴출력과 사용자 선택을 확인
	메뉴 선택에 따라 기능 수행 (처리)
	while문안에 switch-case문 들어가는 형식으로 많이 차용
	while 조건문 안에는 이벤트 대기(키보드입력 마우스입력 등)
	대부분의 응용 프로그램이 채택하는 일반적 구조 (윈도우 애플리케이션, 웹 등)
	특히 GUI가 있는 경우에는 무조건 이렇게 씀 (이벤트 루프)
*/

int GetFare(int age) {
	int nFare = 1000;
	if (age < 20) nFare /= 2;
	return nFare;
}

int PrintMenu(void) {
	int nInput = 0;

	system("cls"); // 시스템함수 > 명령 프롬프트에서 치는 명령어를 쓸 수 있음 > 클리어스크린으로 지우고 밑에 메뉴 보여주고
	printf("[1]New\t[2]Search\t[3]Print\t[4]Remove\t[0]Exit\n");
	scanf_s("%d%*c", &nInput); // 메뉴판 보여주고 사용자의 입력(이벤트)를 받은 다음에
	return nInput; // 그걸 반환해주겠다.
}

int GetAge(void) { // 이런거는 전형적인 ui > 메시지 출력이 가고, 입력이 오고, 유효성검사를 하고(여긴 없지만)
	int age = 0;
	printf("나이를 입력하세요 : ");
	scanf_s("%d%*c", &age);
	return age;
}

// 사용자 입력이 지속적으로 반복되고 그 선택에 따른 대응코드가 수행되는 구조
// 일반적인 ui의 가장 전형적인 구조.
int main(void) {

	int nMenu = 0, nAge = 0;

	// 여기가 이벤트루프
	// 응답없음 >> 이벤트루프에서 뭔가 문제가 일어난 것. suspended
	while ((nMenu = PrintMenu()) != 0) { // ui출력 > 입력대기, 프린트메뉴가 반환한게 0이면 안녕~하고 끝, 1이면 나이 가져오고
		if (nMenu == 1) { // 여기서 메뉴를 if문으로 해놨는데 이걸 스위치케이스로 바꿔주면 더 좋겠지 > 모든 경우가 고려되도록
			nAge = GetAge();
			printf("요금은 %d원 입니다.\n", GetFare(nAge));
			getchar();
		}
	}
	puts("Bye~!");

	return 0;
}

// scanf_s("%d%*c", &nInput); 여기서 %*c는??
// 입력 버퍼에 남아있는 개행문자(\n)를 무시하기 위한 형식 지정자임
// %c : 문자 하나를 읽음 / * : 읽은 문자를 변수에 저장하지 않고 버림
// 숫자 입력 후 엔터를 치면 입력 버퍼에는 숫자\n 형태로 남아있음
// 숫자는 읽혀서 nInput에 저장되지만 \n은 버퍼에 남음
// \n이 버퍼에 남아있으면
// while((nMenu = PrintMenu()) != 0) { 에서
// 다음 scanf_s() 호출 시 이전에 남은 \n을 바로 읽어버려서 새로 입력 불가
// scanf_s("%d%*c", &nInput); 이렇게 해결할 수 있고 (가장 간결)
// scanf_s("%d", &nInput); getchar(); > 버퍼에 남은 \n을 읽어서 버림 >> 이렇게 해결할 수도 있고