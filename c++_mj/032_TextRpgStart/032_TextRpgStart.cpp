﻿// 032_TextRpgStart.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <conio.h>

int StringCount(char* _Ptr)
{
	int Count = 0;

	while (_Ptr[Count])
	{
		++Count;
	}

	return Count;
}


// const를 붙인이유
// 보여주기만 하는 함수인데 수정할 생각이 없는 함수
void StatusRender(const char* _Name, int _Att, int _Hp)
{
	// 콘솔창은 특수문자를 통해서 특수한 출력기호를 사용할수 있는데.
	// 전부다 \ 백스페이스키 역슬레시를 사용해서 표현합니다.
	// %d <= 2글자 맡고
	// \n <= 1글자로 봅니다. 콘솔창이 한글자로 봅니다.
	// \n => 엔터를 쳐라. 라인을 바꿔라.


	// 글자수만큼 - 덜쳐서 끝단라인 맞추기

	// printf는 int자료형 글자수 개수 반환하기 때문에
	//int Size = printf_s("%s", _Name);



	printf_s("%s", _Name);
	int Size = strlen(_Name);

	for (int i = 0; i < 50 - Size; i++)
	{
		printf_s("-");
	}

	printf_s("\n");
	printf_s("공격력 %d\n", _Att);
	printf_s("체력 %d\n", _Hp);

	for (int i = 0; i < 50; i++)
	{
		printf_s("-");
	}

	printf_s("\n");
}


// 공격의 행동을 화면에 랜더링 하는 함수
void DamageRender(const char* _Name, const int& _Att)
{
	printf_s("%s 가 %d의 공격력으로 공격했습니다.\n", _Name, _Att);
}
// 실제 데미지를 데이터적으로 주는 함수
void DamageLogic(const int& _Att, int& _DefHp)
{
	// 축약연산자라고 부르기도 한다.
	// - 뿐만 아니라 더하기 나누기 곱하기 비트단위등등 거의 모든 연산의
	// 축약 연산자가 존재합니다.
	_DefHp -= _Att;
	// _DefHp = _DefHp - _Att;
}



int main()
{
	// 먼저 존재하게 하기 위해서
	// 상태를 만들었다.
	char PlayerName[100] = "Fighter";
	int PlayerHp = 100;
	int PlayerAtt = 10;

	char MonsterName[100] = "Orc";
	int MonsterHp = 50;
	int MonsterAtt = 5;


	// 나는 몬스터나 플레이어를 눈에보이게 만들고 싶다.
	// 1. 초기 스테이터스 보여주기
	StatusRender(PlayerName, PlayerAtt, PlayerHp);

	StatusRender(MonsterName, MonsterAtt, MonsterHp);

	{
		int Input = _getch();
	}

	system("cls");

	while (MonsterHp)
	{

		// 2.플레이어가 어택로직한후 바뀐 스테이터스 보여주고 문구나오게
		DamageLogic(PlayerAtt, MonsterHp);
		StatusRender(PlayerName, PlayerAtt, PlayerHp);
		StatusRender(MonsterName, MonsterAtt, MonsterHp);
		DamageRender(PlayerName, PlayerAtt);

		// 만약 몬스터Hp가 == 0 이면 바로 함수 종료해야해
		if (0 >= MonsterHp)
		{
			printf_s("적이 사망하였습니다.");
			return 0;
		}
		{
			int Input = _getch();
		}

		system("cls");

		// 3. 몬스터가 어택로직한후 바뀐 스테이터스 보여주고 문구나오게
		
		DamageLogic(MonsterAtt, PlayerHp);

		StatusRender(PlayerName, PlayerAtt, PlayerHp);

		StatusRender(MonsterName, MonsterAtt, MonsterHp);
		DamageRender(PlayerName, PlayerAtt);
		DamageRender(MonsterName, MonsterAtt);

		{
			int Input = _getch();
		}

		system("cls");

	}

	// 4.위가 반복돼 그러다가 orc 체력이 0이 되면 그만해야지

	//DamageRender(PlayerName, PlayerAtt);

	//StatusRender(PlayerName, PlayerAtt, PlayerHp);

	//StatusRender(MonsterName, MonsterAtt, MonsterHp);
	//
	//DamageLogic(PlayerAtt, MonsterHp);

	//{
	//	int Input = _getch();
	//}

	//system("cls");

	//// 아무키나 눌릴때까지 기다려 줍니다.
	//{
	//	int Input = _getch();
	//}

	//// 콘솔창에 명령을 요청한다.
	//system("cls");

}



//DamageRender(PlayerName, PlayerAtt);
//DamageLogic(PlayerAtt, MonsterHp);

//DamageRender(MonsterName, MonsterAtt);
//DamageLogic(MonsterAtt, PlayerHp);
