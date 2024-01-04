#include "FightZone.h"
#include <conio.h>
#include <iostream>

bool FightZone::FightLogic(FightUnit& _First, FightUnit& _Second, FightUnit& _Top, FightUnit& _Bot)
{
	// _Second => 몬스터
	// _First => 플레이어

	// _Top => 플레이어
	// _Bot => 몬스터
	{
		int Input = _getch();
	}

	system("cls");
	//_First가 공격을 받는거야?
	_Second.DamageLogic(_First);
	// 각 스테이터스 보여주고
	_Top.StatusRender();
	_Bot.StatusRender();
	// 공격받은 애의 대미지
	_First.DamageRender();
	if (true == _Second.IsDeath())
	{
		printf_s("게임 종료\n");
		return true;
	}


	{
		int Input = _getch();
	}

	system("cls");
	_First.DamageLogic(_Second);
	_Top.StatusRender();
	_Bot.StatusRender();
	_First.DamageRender();
	_Second.DamageRender();
	if (true == _First.IsDeath())
	{
		printf_s("게임 종료\n");
		return true;
	}
	{
		int Input = _getch();
	}
	system("cls");

	return false;
}

void FightZone::Fight(FightUnit& _Player)
{
	while (true)
	{
		_Player.StatusRender();
		NewMonster.StatusRender();

		// 선공 후공이 결정 나고
		// 조건에 따라서

		bool IsEnd = false;

		//if (누가 먼저인가?)
		//{
			IsEnd = FightLogic(_Player, NewMonster, _Player, NewMonster);
		//}
		//else {
		//	IsEnd = FightLogic(_Bot, _Top, _Top, _Bot);
		//}

			if (true == IsEnd)
			{
				return;
			}
	}

}