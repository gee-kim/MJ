// StringContains.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int StringCount(const char* const _Ptr)
{
	int Count = 0;
	while (_Ptr[Count])
	{
		char Ch = _Ptr[Count];
		++Count;
	}
	return Count;
}

enum class StringReturn
{
	Equal,
	NotEqual
};



StringReturn StringEqual(const char* const _Left, const char* const _Right)
{

	//문자열 둘 다 받아와서 더 긴거 count로 while 돌려줘?
	int Count0 = StringCount(_Left);
	int Count1 = StringCount(_Right);
	int Count = 0;
	// 숫자가 다르면 무조건 not equal 이잖아?
	if (Count0 != Count1)
	{
		return StringReturn::NotEqual;
	}
	else if (Count0 == Count1)
	{
		Count0;
	}

	for (int i = 0; i < Count - 1; i++)
	{
		char CHL = _Left[i];
		char CHR = _Right[i];

		if (_Left[i] != _Right[i])
		{
			return StringReturn::NotEqual;
		}
		else
		{
			return StringReturn::Equal;
		}
	}

}

void StringAdd(char* _Dest, const char* const _Left, const char* const _Right)
{
	//_Left와 _Right 배열길이 더해줘
	int Count0 = StringCount(_Left);
	int Count1 = StringCount(_Right);
	int Count = Count0 + Count1;

	for (int i = 0; i < Count0 - 1; i++)
	{
		_Dest[i] = _Left[i];
		char Dest = _Dest[i];

	}
	for (int i = 0; i < Count1 - 1; i++)
	{
		_Dest[i+Count0] = _Right[i];
		char Dest = _Dest[i+Count0];
	}
	return ;
}

int StringContains(const char* const _Dest, const char* const _Find)
{
	return 0;
}

int main()
{
	{
		// 오른쪽과 왼쪽이 같아?
		StringEqual("AAAB", "AAAA");
	}

	{
		char Arr[100] = {};
		StringAdd(Arr, "gfadsgf", "fasdfsda");
		// "cccccddddd"
		int a = 0;
	}

	{
		// int Result = StringContains("ababcccccabab", "ab");

		int Result = StringContains("ababcccccabab", "c");

		int a = 0;
	}


}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
