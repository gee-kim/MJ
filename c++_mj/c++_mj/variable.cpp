
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

	// c스타일 함수
	printf_s("%d Count %d", 999);
		// %만나자마자 가변인자야. 가서 주소값에서 찾아와
		// %d로 그다음에 주소에 있는값을 또 불러와


}