
#include <iostream>

// �������� �⺻������ �Լ��� ���ڴ� => ��������
// ���������� �ణ �ٸ����� ����.
// �Ʒ� �������� �ּҰ� Ȯ���ϱ�

void Test(int _Value0, int _Value1, int _Value2, int _Value3)
{



}



int main()
{
	int _Value[4] = { 1, 2, 3, 4 };
	Test()



	//int[] <= int �迭���̶�� �θ�
	//��� ������ �پ��ְ� ��.
	int MonsterHps[5] = { 1, 2, 3, 4, 5 };

	//ù��° 
	//[][][][] [][][][] [][][][] [][][][]
	//��� ������ �پ��ְ� ��.


	//���κ��̽���� �ϰ�
	int MonsterHp1 = MonsterHps[0];
	int MonsterHp2 = MonsterHps[1];
	int MonsterHp3 = MonsterHps[2];
	int MonsterHp4 = MonsterHps[3];
	int MonsterHp5 = MonsterHps[4];
	//
	int* Ptr = MonsterHps;

	//Ptr == 100����
	//Ptr + 1 == 100���� + (sizeof(int) * 1) ����

	__int64 Address0 = reinterpret_cast<__int64>(Ptr + 0);

	int MonsterHp1 = *(Ptr + 0); //Ptr[0]

	int a = 0;

	// ������ ����
	// �迭 - ���� �غ���
	

}