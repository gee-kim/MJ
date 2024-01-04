
#include <iostream>


int Getup()
{

}
int main()
{
	int Hp = 100;

	if (Hp /*메모리영역*/)
	{
		//플레이어는 살아있다.
		int a = 0;

	}

	// 메모리영역을 검사해서
	// 참이면 실행코드를 실행시키고
	// 참이 아니라면 실행코드를 실행안해


	if (Getup())
	{
		//플레이어는 살아있다.
		int a = 0;

	}

	// if 는 함수안에서만 사용가능
	// 실행될 수 있는 함수의 {}중괄호 안에서만 if 사용할 수 있어.
	// 함수의 실행 메모리 안에서만 사용할수있어


	// 죽음 조건
	// if문은 보통 비교연산자와 많이 사용됨

	if (0 >= Hp)
	{
		int a = 0;
	}

	// 조건을 연계해야 할때가 있어.
	// Hp 100 이상



	if (Hp)
	{

	}

	// bool형 상수 표현식
	// true
	// false

	// 1바이트 문자형
	// 문자는 ' ' 안에서 초기화해서 표현해야 함.
	// 문자형 상수표현식
	char Ch = 'A';
	char T = 'b';
	switch (Ch)
	{
	case T :// 변수는 올 수없어. 상수만 와야해
		break;


	}

	{
		//문자처리 규칙, 끝에 0 무조건 입력
		//실제적으로 AAAA0 들어가있어서, 출력잘돼
		char String0[5] = "ABCD";
		char String1[5] = {'A', 'A', 'A', 'A', 'A' };

		//printf_s(String0);
		//printf_s(String1);

		int Count = 0;
		char* _Ptr = String0;

		while (_Ptr[Count])
		{
			char Ch = _Ptr[Count];
			putchar(static_cast<int>(ch));
			Count = Count + 1;
		}
	

	}
	// 글자 1개를 출력할 수 있는 함수
	putchar('a');

	// while(메모리영역) 조건문
	// 메모리영역 조건이 true(참) 이라면
	// 실행코드를 1번 실행하고 다시 조건문으로 돌아간다.
	// 그래서 언제나 빠져나올 방법을 만들어놔야해.

	// 즉, 아래 코드는 무한히 화면에 a 출력
	//while (true)
	//{
	//	putchar('a');
	//}

	int count = 5;

	while (count)
	{
		putchar('A');
		count = count - 1;

	}
	
}