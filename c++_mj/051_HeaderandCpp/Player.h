#pragma once
#include "int2.h"

class Player
{
public:
	
	Player(const int2& _StartPos, char _RenderChar)
	{
	}

	void Update()
	{
	}

	void SetBulletFire(bool* _IsFire)
	{
	}

private:
	int2 Pos = { 0, 0 };
	char RenderChar = '@';
	bool* IsFire = nullptr;
};

