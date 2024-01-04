#pragma once
class int2
{
	// 보통 이런 수학적 클래스는
	// public으로 맴버변수를 두는 편입니다.
public:
	int X = 0;
	int Y = 0;

	// 디폴트 대입연산자.
	void operator=(const int2& _Other)
	{
		X = _Other.X;
		Y = _Other.Y;
	}

	int2 operator+(const int2& _Other)
	{
		return { X + _Other.X, Y + _Other.Y };
	}

	void operator+=(const int2& _Other)
	{
		X += _Other.X;
		Y += _Other.Y;
	}


	// 전역변수는 영역과 관련없이
	// 이름이 위에 있다면 그것을 사용할 수 있다.
	const int ScreenX = 20;
	const int ScreenY = 12;
	const int ScreenXHalf = ScreenX / 2;
	const int ScreenYHalf = ScreenY / 2;
};


