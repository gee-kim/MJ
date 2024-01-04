#pragma once
class int2
{
	// ���� �̷� ������ Ŭ������
	// public���� �ɹ������� �δ� ���Դϴ�.
public:
	int X = 0;
	int Y = 0;

	// ����Ʈ ���Կ�����.
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


	// ���������� ������ ���þ���
	// �̸��� ���� �ִٸ� �װ��� ����� �� �ִ�.
	const int ScreenX = 20;
	const int ScreenY = 12;
	const int ScreenXHalf = ScreenX / 2;
	const int ScreenYHalf = ScreenY / 2;
};


