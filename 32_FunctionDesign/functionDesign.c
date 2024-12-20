#include <stdio.h>

/* 진입지점 : 엔트리포인트 > ex) 자동으로 호출되는 메인함수
   printf(), scanf_s() >> CRL (C-Runtime-Library)
   라이브러리 > 함수와 클래스를 세트를 묶어서 잔뜩 모아놓은 것
   만약에 입출력에 관련된 세트의 라이브러리가 있다?
   >> 표준입출력 라이브러리라고 부르고 SDK라고도 부름(소프트웨어 디벨로프먼트 킷)
   SDK는 어떤 소프트웨어를 만드는데 필요한 라이브러리 > 공구상자같은거
   이 SDK속에는 수많은 라이브러리가 있고 또 그 속에는 수많은 함수들이 있는데
   그 때 함수는 또 API(어플리케이션 프로그래밍 인터페이스)라고 함.
   SDK라고 하는게 보통 그런 API들, 즉 함수들의 집합체이고, 
   어떤때는 라이브러리라고 그랬다가 어쩔때는 SDK라고 그랬다가
   여튼 그런 용어들이 결국 얘기하는건 함수
   
   호출자 함수 = 호출자 = 콜러 = caller
   피호출자함수 = 콜리 = callee
   디버그에서 콜러 콜리 잘 나오니까 외워둬

   함수의 이름도 배열의 이름처럼 주소이다.
   (배열의 이름(식별자)는 0번요소의 주소지)
   변수나 배열은 데이터를 저장ㅇ하기 위한건데 함수의 이름은 주소기는 한데 함수의 주소 따라가면
   기계어가 튀어나옴. 즉 실행코드가 튀어나온다 (C언어는 네이티브 언어니까)
   그러니까 함수의 주소라는 것은 쉽게 말해 실행코드가 저장된 메모리의 주소다
   그렇다면? > 바꾸면 안되지 > Read Only
   호출자 함수에서 예를들어 nResult = Add(3, 4);
   여기서 ()는 함수호출 연산자임.
   Add(3, 4);
   주소(3, 4); > 이 경우는 괄호가 아니라 연산자. 함수호출도 연산임.
   
   printf에 함수를 호출해서 %d에 그 함수의 리턴값을(임시결과를) 받아서 출력할 수 있지
   리턴값*2 같은것도 가능하지

   printf("max: %d\n", GetMax(1, 2, 3));
	printf("max: %d\n", GetMax(1, 2, 3) * 2);
	이런식으로 쓸 수 있고

	잘 쓰이지 않고 코드가 길어서 별로지만
	printf("max: %d\n", nResult = GetMax(1, 2, 3));
	이렇게 쓸 수도 있긴 함

	바인딩 binding = 호출자함수와 피호출자 함수로 관계를 규정하는 것. 두 함수가 관계됐다, 묶였다, 관계가 규정됐다.

	바인딩을
	컴파일타임, 링크타임(개발단계) 시점 에서 하면 스태틱 바인딩

	바인딩을
	런타임에 하면 다이나믹 바인딩, 찾아서 공부해

	재사용 가능한 단위코드는 함수로 구현 (DRY원칙)

	1. KISS - Keep It Simple Stupid
	- 되도록 간단하고 단순하게
	2. YAGNI - You Ain't Gonna need it
	- 필요한 작업만 해라 - 현재는 사용하지 않지만 확장성을 고려해서 미리 작업해놓지 말라
	3. DRY - Do not Repeat Yourself
	- 반복하지 마라 > 소스코드에서 동일한 코드 반복X 반복되는 코드로 인한 유지 보수 오버헤드 커짐 방지

	한번정도는 복붙하다가 세번쯤 쓰게된다?
	이건 함수화 시켜놔야해
	나중에 복붙때문에 야근으로 피똥안싸려면

	근데 주의할점이 함수설계원칙중
	"UI와 기능은 반드시 분리"**********

	그래서 재사용 가능한 단위코드는 함수로 구현해놓되,
	UI와 기능은 반드시 분리시켜라. 기능적 함수안에 UI는 넣지말라

	예를들어 팩토리얼 함수를 구현해놓는다면 scan_f에 무슨 뭐 1~9까지의 수를 입력하시오 메시지 뜨고 그런건 넣어두면 안되겠지 기능을 구현해놓는 함수를 만들고 있다면

	오로지 if 1~9안에
	for( ~~~ *= ~~~ 이런거만 넣어둬야하는거지
	그 때 이제 리턴이 0이면 에러다 이런게 함수내부에 레퍼런스 즉 설명이 써있어야 되는거지

	메인함수에선 UI와 호출담당, getFactorial() 쪽에선 기능담당 그런식으로

	유효성검사 > 예를들어 성적을 입력해야하는데 0~100 점의 범위에서 벗어나는지 그런거

	아래 코드는 UI/기능 분리 예시
   
   */


// 이 UI 담당에서 스캔에프로 성적을 매개변수로 받아서
int GetResult(void) {
	int nResult = 0;
	printf("성적(1~100)입력 : ");
	scanf_s("%d", &nResult);
		return nResult;
}
// 이런식으로 UI / 기능 분리
char GetGrade(int nScore) {
	if (nScore >= 90) return 'A';
	else if (nScore >= 80) return 'B';
	else if (nScore >= 70) return 'C';
	else if (nScore >= 60) return 'D';
	return 'F';
}

// 이제 그거를 가져다 쓰는 메인함수는 이렇게 되는거지
// 성적을 넘겨주면 // 그걸 따라서 학점을 계산해서 뭔가를 반환한다 // 그걸 받아서 프린트해준다(콜러입장)
// 그것까지 캡슐화
int main(void) {
	int nResult = 0;

	nResult = GetResult();
	printf("당신의 학점은 %c(%d)입니다.\n",
		GetGrade(nResult), nResult);
	return 0;
}

