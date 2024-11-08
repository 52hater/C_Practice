#include <stdio.h>

// 실무에서 많이 쓰는 LookUp배열, switch case 대체

int main(void) {

	// 전체 경우에 대한 과금률 결과를 담은 배열의 선언 및 정의
	double aRate[10] = {
		0.0, 0.1, 0.25, // 1~3세 0%, 10%, 25%
		0.5, 0.5,       // 4~5세
		0.6, 0.65,      // 6~7세
		0.8, 0.82, 0.97 // 8~10세
	};
	int nAge = 0, nFare = 1000;

	printf("요금표\n");
	for (int i = 0; i <= 10; ++i)
		printf("%세 요금 : \t%d원\n",
			i,
			(int)(nFare * aRate[i - 1]) // 이게 중요한 핵심, 원래 기본요금에다가 할인율을 따져서(0~9) 각자 따로 정해줬더라도
										// 곱해서 출력하면 바로 그 값이 나옴.
		);
	putchar('\n');

	printf("나이를 입력하세요. : "); // 나이를 입력 받았는데
	scanf_s("%d", &nAge);
	if (nAge < 1) // 음수나 0살 혹은
		nAge = 1;
	else if (nAge > 10) // 10살이상으로 입력하면
		nAge = 10; // 유효성 검사 후 강제로 보정함 (1살, 10살)

	printf("최종요금 : %d원\n",
		(int)(nFare * aRate[nAge - 1]) // 입력받은 나이 그거를 가지고 연산을 해가지고 바로 요금을 찾아버림
									   // 스위치 케이스 같은거 쓸 필요없지 이거 성능이 좋은데
									   // 근데 단점은 사용자의 입력을 신뢰하기 힘들고 유효성검사 필요함.
									   // 개발자는 항상 방어적인 코드를 짜야지. (위에 강제보정 처럼)
									   // 함수포인터에 LookUp배열 형태를 만들면 고성능
									   // 다만 경계를 잘 따져서 유효성 검사하는건 기본중의 기본***
	);
	putchar('\n');

	return 0;
}