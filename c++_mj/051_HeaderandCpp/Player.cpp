
#include "Player.h"

class Player
{
public:
	Player();
	~Player();

private:
	int2 Pos = { 0, 0 };
	char RenderChar = '@';
	bool* IsFire = nullptr;
};

Player::Player()
{
}

Player::~Player()
{
}