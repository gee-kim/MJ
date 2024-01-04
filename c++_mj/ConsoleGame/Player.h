#pragma once
#include "ConsoleObject.h"

#include <conio.h>

class Player : public ConsoleObject
{
public:
	Player();

	Player(const int2& _StartPos, char _RenderChar);

	// inline�� �����Ϸ��� �Լ��� �����ϰ�
	// �� ��ġ�� ġȯ���� ������.
	int2 GetPos();

	char GetRenderChar();

	void Update();

	void SetBulletFire(bool* _IsFire);

private:
	int2 Pos = { 0, 0 };
	char RenderChar = '@';
	bool* IsFire = nullptr;
};
