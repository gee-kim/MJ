// MyPrintf.cpp : �� ���Ͽ��� 'main' �Լ��� ���Ե˴ϴ�. �ű⼭ ���α׷� ������ ���۵ǰ� ����˴ϴ�.
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
	// ��������123 ���ڸ� �ҷ����� ���ؼ���?
	// _Format ������ 500������� �Ҷ� �� ����8����Ʈ �ּҰ��� �����ؾ� ���ݾ�?
	// 
	// �׳� ����ϸ� 500�����ε�
	// int*�� �ް������ c++�� ���������� ������.
	// �ּҰ��� ������ �ٽ�. 8����Ʈ ������.
	// 8����Ʈ������ �ٲٴ� ����� ����ݾ�
	// �ּҰ��� ������ �������� __int 64������ ��ȯ��.
	// �׳� ���ϰ� int*�� �޴°ž�?

	// const char* const* Ptr = &_Format;

	__int64 Address = reinterpret_cast<__int64>(&_Format);
	Address = Address + 8;

	/*const int* Ptr = reinterpret_cast<int*>(Address);
	Ptr = Ptr + 2;*/

	int Count = 0;

	while (_Format[Count])
	{
		char Ch = _Format[Count];

		//�������� �ƴҰ�� ���ڸ� ��� �� �ٽ� �ݺ�
		if ('%' != Ch)
		{
			putchar(_Format[Count]);
			++Count;
			continue;
		}
		// ������ ������ %�� ������ ���.
		// %d % �ڿ��ִ� d�� �˾ƾ��ϴϱ�
		char NextCh = _Format[Count + 1];

		// �� ������ %���ڸ� ������ ����Ǵ� ����
		switch (NextCh)
		{
		case 'd':
		{// d �޺κ� ���ڸ� ����� �մϴ�.
			int* Ptr = reinterpret_cast<int*>(Address);

			char Arr[100] = {};

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
			// %s�� �־�
			// % �⺻������ Ư���Ѱ� ����Ұž�.
			int Return = MyPrintf("aaaa bbb %d", 123);


			//ȭ�鿡 ���� ���ڼ� 6 �������
			int Value = printf_s("%d", 123456);
		}
