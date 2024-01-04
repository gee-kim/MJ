
// 함수의 리턴값 쪽에 자료형을 넣는것과 아닌것의 차이에 대해 알아보자

#include <iostream>

int Test()
{
	int 
	// 함수를 종료하고 만약 리턴할 값이 있다면 외부에 리턴한다.
	return 10;


}

// 인자란 외부의 값을 복사받아서 내부에서 사용하는것 의미
void ParameterStart(int Value)
{
	Value = 9999;

}


// 함수의 인자는 n개 넣을 수 있어.
// But, 리턴값은 한번에 여러개 할 수 없어.
// 행동이 행동이 아니다.
int Damage(int _Hp, int _Shield, int _Att)
{
	_Hp = _Hp - _Att;
	// Hp의 결과값은 리턴해줄수 있어도 다른값은 못해

	return _Hp;
}

// 리턴값이라는 것이 무엇이지 알아보자.
// 리턴 이라는 용어가 무엇인지 알아보자.
int main()
{
	int Value = 0;

	// int* 통체로 자료형이라고 해.
	// 포인터 문법은 자료형 뒤에 *을 붙이면 뭐든지 그 자료형의 포인터형이 됨.
	// 포인터는 굉장히 위험한 점이 많기 때문에,
	// 특정 주소를 담는다. 그래서 일반적인 정수와는 다른 문법들이 많음.
	// 어떤 변수나 메모리의 램의 정수 위치;
	// 주소값 자체에는 큰 의미를 두지마. ex) 이게 왜 67억번지에 있지?

	// 포인터는 일반적인 대입이 안됨.
	// 정수라고 해서 정수를 넣어주면 대입이 되는 것이 아니라.

	// 특정 메모리영역의 주소값을 리턴해 달라는 단항연산자.
	int* ValuePtr = &Value;

	

	int Left = 1;
	// 위치 : main 실행 스택안에 들어있다.(그냥 우선 100번지라고 하자)
	// 크기 :4바이트
	// 형태 : 정수
	// 값 : 1

	int Right = 1

	Left + Right;
	// 눈에 보이지 않는 4바이트가 스택메모리상 있어. 근데 명시한 이름이 없어.
	// //4바이트 4바이트 8바이트 썻을거라 생각하지만, 실제 12바이트 썼어.

	Left = Test();
	// test의 리턴값을 받아와서 left에 대입해.
	// 즉 Test함수를 실행한 4바이트, Left로 그 값을 넣으니까 4바이트 총 8바이트 사용해

}
// c++에는 참조형과 값형이 있는데,
// 일반적인 변수는 값형
// 포인터와 레퍼러스등을 참조형이라고 하고
// 
// c++스타일 캐스팅 방식
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
	//c스타일 캐스팅 방식
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
	// 내가 가진 번지 값의 값이된다.
	*MonsterHpPtr = 50;


	int MonsterHp = 100;
	int& Ref = MonsterHP;

	Ref = 100;
	Ref = 200;
	Ref = 300;


}