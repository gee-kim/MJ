
#include <iostream>

void VarTest(int Count, int Check1, int Check2)
{
	//__

	int* Ptr = &Count;

	for (int i = 0; i < Count; i++)
	{
		Ptr = Ptr + 2;
		// Ptr += 2;
		int Value = *Ptr;
		int a = 0;
	}
	
}



int main()
{
	VarTest(2, 20, 30);

	// c��Ÿ�� �Լ�
	printf_s("%d Count %d", 999);
		// %�����ڸ��� �������ھ�. ���� �ּҰ����� ã�ƿ�
		// %d�� �״����� �ּҿ� �ִ°��� �� �ҷ���


}