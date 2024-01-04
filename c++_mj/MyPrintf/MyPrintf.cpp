// MyPrintf.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

void NumberToString(int Number, char* _Ptr)
{	
	int CalNumber = Number;
	int NumberCount = 0;
	const char* CPtr = _Ptr;

	while (CalNumber)
	{
		CalNumber /= 10;
		++NumberCount;
	}

	int Mul = 1;

	for (int i = 0; i < NumberCount - 1; i++)
	{
		Mul *= 10;
	}
	
	int Value = 0;
	CalNumber = Number;

	for (int i = 0; i < NumberCount; i++)
	{

		Value = CalNumber / Mul;

		_Ptr[i] = Value + '0';

		CalNumber -= Value * Mul;
		Mul /= 10;
	}
}

int MyPrintf(const char* const _Format, ...)
{
	// 가변인자123 숫자를 불러오기 위해서는?
	// _Format 번지가 500번지라고 할때 그 다음8바이트 주소값에 접근해야 하잖아?
	// 
	// 그냥 사용하면 500번지인데
	// int*로 받고싶으면 c++은 문법적으로 허용안함.
	// 주소값의 진정한 핵심. 8바이트 정수다.
	// 8바이트정수로 바꾸는 방법은 배웠잖아
	// 주소값을 정수로 받으려면 __int 64형으로 변환해.
	// 그냥 편하게 int*로 받는거야?
	
	// const char* const* Ptr = &_Format;
	
	__int64 Address = reinterpret_cast<__int64>(&_Format);
	Address = Address + 8;
	
	/*const int* Ptr = reinterpret_cast<int*>(Address);
	Ptr = Ptr + 2;*/

	int Count = 0;

	while (_Format[Count])
	{
		char Ch = _Format[Count];

		//포맷팅이 아닐경우 글자를 출력 후 다시 반복
		if ('%' != Ch)
		{
			putchar(_Format[Count]);
			++Count;
			continue;
		}
		// 포매팅 문자인 %를 만났을 경우.
		// %d % 뒤에있는 d를 알아야하니까
		char NextCh = _Format[Count + 1];

		// 이 구문은 %문자를 만나면 실행되는 구문
		switch (NextCh)
		{
		case 'd':
		{// d 뒷부분 인자를 끌어내야 합니다.
			int* Ptr = reinterpret_cast<int*>(Address);

			char Arr[100] = {};
			// 가변인자 정수값을 Arr에 넣어줌.
			NumberToString(*Ptr, Arr);

			int Index = 0;
			while (Arr[Index])
			{
				putchar(Arr[Index]);
				++Index;
				++Count;
			}

			break;	
		}
		default:
		{
			int a = 0;
			break;
		}

		return Count;
}

int main();
{
	// %s도 있어
	// % 기본적으로 특별한걸 출력할거야.
	int Return = MyPrintf("aaaa bbb %d", 123);


	//화면에 나온 글자수 6 출력해줘
   int Value = printf_s("%d", 123456);
}
