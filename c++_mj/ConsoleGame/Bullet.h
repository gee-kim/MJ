#pragma once
// ����� ������ ����� �߰��ؾ� �մϴ�.
#include "ConsoleObject.h"

class Bullet : public ConsoleObject
{
public:
	Bullet(const int2& _StartPos, char _RenderChar);

	bool& GetIsFireRef();

	int2 GetPos();

	char GetRenderChar();

private:
	bool IsFire = false;
	int2 Pos = { 0, 0 };
	char RenderChar = '@';
};
