
// �Լ��� ���ϰ� �ʿ� �ڷ����� �ִ°Ͱ� �ƴѰ��� ���̿� ���� �˾ƺ���

#include <iostream>

int Test()
{
	int 
	// �Լ��� �����ϰ� ���� ������ ���� �ִٸ� �ܺο� �����Ѵ�.
	return 10;


}

// ���ڶ� �ܺ��� ���� ����޾Ƽ� ���ο��� ����ϴ°� �ǹ�
void ParameterStart(int Value)
{
	Value = 9999;

}


// �Լ��� ���ڴ� n�� ���� �� �־�.
// But, ���ϰ��� �ѹ��� ������ �� �� ����.
// �ൿ�� �ൿ�� �ƴϴ�.
int Damage(int _Hp, int _Shield, int _Att)
{
	_Hp = _Hp - _Att;
	// Hp�� ������� �������ټ� �־ �ٸ����� ����

	return _Hp;
}

// ���ϰ��̶�� ���� �������� �˾ƺ���.
// ���� �̶�� �� �������� �˾ƺ���.
int main()
{
	int Value = 0;

	// int* ��ü�� �ڷ����̶�� ��.
	// ������ ������ �ڷ��� �ڿ� *�� ���̸� ������ �� �ڷ����� ���������� ��.
	// �����ʹ� ������ ������ ���� ���� ������,
	// Ư�� �ּҸ� ��´�. �׷��� �Ϲ����� �����ʹ� �ٸ� �������� ����.
	// � ������ �޸��� ���� ���� ��ġ;
	// �ּҰ� ��ü���� ū �ǹ̸� ������. ex) �̰� �� 67������� ����?

	// �����ʹ� �Ϲ����� ������ �ȵ�.
	// ������� �ؼ� ������ �־��ָ� ������ �Ǵ� ���� �ƴ϶�.

	// Ư�� �޸𸮿����� �ּҰ��� ������ �޶�� ���׿�����.
	int* ValuePtr = &Value;

	

	int Left = 1;
	// ��ġ : main ���� ���þȿ� ����ִ�.(�׳� �켱 100������� ����)
	// ũ�� :4����Ʈ
	// ���� : ����
	// �� : 1

	int Right = 1

	Left + Right;
	// ���� ������ �ʴ� 4����Ʈ�� ���ø޸𸮻� �־�. �ٵ� ������ �̸��� ����.
	// //4����Ʈ 4����Ʈ 8����Ʈ �����Ŷ� ����������, ���� 12����Ʈ ���.

	Left = Test();
	// test�� ���ϰ��� �޾ƿͼ� left�� ������.
	// �� Test�Լ��� ������ 4����Ʈ, Left�� �� ���� �����ϱ� 4����Ʈ �� 8����Ʈ �����

}
// c++���� �������� ������ �ִµ�,
// �Ϲ����� ������ ����
// �����Ϳ� ���۷������� �������̶�� �ϰ�
// 
// c++��Ÿ�� ĳ���� ���
{
	int Value = 100;
	bool Check = static_cast<bool>(Value);
	Value = static_cast<bool>Check;

}
{

	int Value = 100;
	int* Ptr = &Value;
	in
		
	reinterpret_cast<
}
{
	//c��Ÿ�� ĳ���� ���
	int Value = 100;
	bool Check = (bool)Value;
	Value = (int)Check;

}
void 
{

}
{


	int MonsterHp = 200;
	int* MonsterHpPtr = &MonsterHp;
	// ���� ���� ���� ���� ���̵ȴ�.
	*MonsterHpPtr = 50;


	int MonsterHp = 100;
	int& Ref = MonsterHP;

	Ref = 100;
	Ref = 200;
	Ref = 300;


}