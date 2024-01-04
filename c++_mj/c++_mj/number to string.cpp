
// StringToNumber.cpp : �� ���Ͽ��� 'main' �Լ��� ���Ե˴ϴ�. �ű⼭ ���α׷� ������ ���۵ǰ� ����˴ϴ�.
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
	// ���� ������ �˾Ƴ��� �մϴ�.
	// StringCount();
	// *= 10�� ��� �մϴ�.
	// /= 10 ��� �մϴ�.
	// = ���� - '0'
	// for���� ����ؾ��մϴ�.
	// ����ó�� ���մϴ�.
	// char Ch = _NumberString[i];

	int Count = StringCount(_NumberString);
	int Value = 1;

	// pow��� �Լ��� �̹� �־��.
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
	//������ ���ڸ����� �˾ƾ���.
	//�� �ڸ����� ���ڸ� �˷��� �ڸ�����ŭ ��������.
	//10���� ��������.
	//����̵� �������� �����غ����� ���� �߿�

	int CalNumber = Number;
	int NumberCount = 0;
	const char* CPtr = _Ptr;

	while (CalNumber)
	{
		CalNumber /= 10;
		++NumberCount;
	}

	//���ϱ� Muntiply
	int Mul = 1;

	// pow��� �Լ��� �̹� �־��.
	for (int i = 0; i < NumberCount - 1; i++)
	{
		Mul *= 10;
	}
	// 123
	// ���ڸ� �����ϱ� �����Ѵ�.
	
	//0 �����Ⱑ ������ ����.
	/*Value = CalNumber / Mul;
		
	_Ptr[0] = Value + '0';

	CalNumber -= Value * Mul;
	Mul /= 10

	_Ptr[1] = Value + '0';

	CalNumber -= Value * Mul;
	Mul /= 10

	�ݺ��Ǵϱ� for ������ �ݺ��ؾ���*/
	
	int Value = 0;
	CalNumber = Number;


	for (int i = 0; i < NumberCount ; i++)
	{
		// Value = �迭�� ���������� �� ����
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

	// ���� �߰��� 0�� ����
	// 0 +'0' ������ 0?
	NumberToString(120123, Arr);
}
