
#include <iostream>

// �������� �⺻������ �Լ��� ���ڴ� => ��������
// ���������� �ణ �ٸ����� ����.
// �Ʒ� �������� �ּҰ� Ȯ���ϱ�

void Test(int _Value0, int _Value1, int _Value2, int _Value3)
{

	__int64 Address0 = reinterpret_cast<__int64>(&_Value0);
	__int64 Address1 = reinterpret_cast<__int64>(&_Value1);
	__int64 Address2 = reinterpret_cast<__int64>(&_Value2);
	__int64 Address3 = reinterpret_cast<__int64>(&_Value3);

	int a = 0;
}


int main()
{
	
	Test(10, 20, 30, 40);

}