/* 전역변수와 식별자 검색 순서
   - 전역변수는 함수 바디 밖에 선언
   - 식별자 검색 순서
   1. 지역 스코프
   2. 최대 함수 바디
   3. 최대 로컬 파일
   4. 외부 파일까지 확장
*/

// 접근성(범위)이 스코프내부에 종속된다 > 지역변수 > 최대 가봤자 함수수준
// 접근범위가 파일 수준까지 격상된다 (소스코드파일 ~~.c) > 함수바디 밖에 선언 > 전역변수
// 소스코드파일이 몇 개 있다고 쳤을 때, 어떤 소스코드파일에 변수가 하나 선언되어 있는데
// 그걸 다른 소스코드파일에서 접근하려고 할 때 써먹는게 전역변수
// 전역변수는 """반드시 필요한 경우에만 써라""" / 일종의 고육책일 뿐 능사가 아님
// 유지보수, 가독성높은, 뭐 그런것과는 대척점에 있는 것이 전역 변수
// 지역변수 > 자동변수 > 메모리를 스택영역을 쓰고 관리가 편함
// 전역변수는 정적 영역을 쓴다. > 자동으로 관리가 되지 않음.(멀티스레드(동시성)를 논하기 시작하면 문제가 되기 시작)
// 함수를 여럿 만들게 될텐데 그게 모조리 하나의 전역변수에 접근을 한다면?
// 특정 전역변수에 대해서 함수들이 의존하게 된다. (의존성이 전역변수를 중심으로 집중하게 됨) > 심각한 상황
// 그런 상황에서 어떤 이유로 전역변수를 안쓰게되면 모든 함수 다 뜯어고쳐야 함(유지보수방해) > 할 수 있다면 전역변수는 안써야함.
// C#과 자바는 문법적으로 전역변수 자체가 없음.

#include <stdio.h>

// g_ = 전역변수
// 전역변수를 혹시나라도 써야되면 **무조건** "g_" 를 붙여라(이름만 봐도 전역변수인지 알 수 있도록)
int g_nCounter = 0; // 전역변수는 정적메모리를 사용해서 무조건 0으로 초기화 되지만 그냥 써주자.

// 매개변수로 뭔가 값이 넘어오면 그걸로 전역변수g_nCounter를 초기화함
void InitCounter(int nData) {
	g_nCounter = nData;
}

// 전역변수의 값을 1증가시킴
void IncreaseCounter() {
	g_nCounter++;
}

int main(void) {

	InitCounter(10);
	printf("%d\n", g_nCounter); // 10
	
	IncreaseCounter();
	printf("%d\n", g_nCounter); // 11
	
	IncreaseCounter();
	printf("%d\n", g_nCounter); // 12

	return 0;
}