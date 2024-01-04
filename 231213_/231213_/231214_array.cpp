
#include <iostream>

// 선생님이 기본적으로 함수의 인자는 => 지역변수
// 지역변수와 약간 다른점이 있음.
// 아래 변수들의 주소값 확인하기

void Test(int _Value0, int _Value1, int _Value2, int _Value3)
{



}



int main()
{
	int _Value[4] = { 1, 2, 3, 4 };
	Test()



	//int[] <= int 배열형이라고 부름
	//모든 변수는 붙어있게 됨.
	int MonsterHps[5] = { 1, 2, 3, 4, 5 };

	//첫번째 
	//[][][][] [][][][] [][][][] [][][][]
	//모든 변수는 붙어있게 됨.


	//제로베이스라고 하고
	int MonsterHp1 = MonsterHps[0];
	int MonsterHp2 = MonsterHps[1];
	int MonsterHp3 = MonsterHps[2];
	int MonsterHp4 = MonsterHps[3];
	int MonsterHp5 = MonsterHps[4];
	//
	int* Ptr = MonsterHps;

	//Ptr == 100번지
	//Ptr + 1 == 100번지 + (sizeof(int) * 1) 번지

	__int64 Address0 = reinterpret_cast<__int64>(Ptr + 0);

	int MonsterHp1 = *(Ptr + 0); //Ptr[0]

	int a = 0;

	// 오늘의 과제
	// 배열 - 빼기 해보기
	

}