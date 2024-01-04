
// StringToNumber.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int StringCount(const char* const _Ptr)
{
	int Count = 0;
	while (_Ptr[Count])
	{
		char Ch = _Ptr[Count];
		++Count;
	}
	return Count;
}

int StringToNumber(const char* const _NumberString)
{
	// 글자 개수를 알아내야 합니다.
	// StringCount();
	// *= 10을 써야 합니다.
	// /= 10 써야 합니다.
	// = 변수 - '0'
	// for문을 사용해야합니다.
	// 예외처리 안합니다.
	// char Ch = _NumberString[i];

	int Count = StringCount(_NumberString);
	int Value = 1;

	// pow라는 함수가 이미 있어요.
	for (int i = 0; i < Count - 1; i++)
	{
		Value *= 10;
	}

	int Result = 0;
	for (int i = 0; i < Count; i++)
	{
		char Ch = _NumberString[i];
		int Number = Ch - '0';
		Result += Number * Value;
		Value /= 10;
	}

	return Result;
}

void NumberToString(int Number, char* _Ptr)
{
	//정수가 몇자리인지 알아야함.
	//각 자리수의 숫자를 알려면 자리수만큼 나눠야함.
	//10으로 나눠야해.
	//어떤값이든 원본값을 보존해보놓는 습관 중요

	int CalNumber = Number;
	int NumberCount = 0;
	const char* CPtr = _Ptr;

	while (CalNumber)
	{
		CalNumber /= 10;
		++NumberCount;
	}

	//곱하기 Muntiply
	int Mul = 1;

	// pow라는 함수가 이미 있어요.
	for (int i = 0; i < NumberCount - 1; i++)
	{
		Mul *= 10;
	}
	// 123
	// 숫자를 분해하기 시작한다.
	
	//0 나누기가 허용되지 않음.
	/*Value = CalNumber / Mul;
		
	_Ptr[0] = Value + '0';

	CalNumber -= Value * Mul;
	Mul /= 10

	_Ptr[1] = Value + '0';

	CalNumber -= Value * Mul;
	Mul /= 10

	반복되니까 for 문으로 반복해야지*/
	
	int Value = 0;
	CalNumber = Number;


	for (int i = 0; i < NumberCount ; i++)
	{
		// Value = 배열에 순차적으로 들어갈 숫자
		Value = CalNumber / Mul;

		_Ptr[i] = Value + '0';

		CalNumber -= Value * Mul;
		Mul /= 10;
	}



}


int main()
{
	int a = printf_s("aaaaa");

	int Number = StringToNumber("6544");

	char Arr[6] = {};

	// 만약 중간에 0이 들어가면
	// 0 +'0' 어차피 0?
	NumberToString(120123, Arr);
}
