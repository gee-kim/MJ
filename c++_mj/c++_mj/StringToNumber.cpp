

#include <iostream>

void NumberToString(const char* _)

int StringCount(const char* const _Ptr)
{
    int Count = 0;
    while (_Ptr[Count])
    {
        ++Count;
    }
    return Count;
}

int StringToNumber(const char* const _NumberString)
{
    // 글자 개수를 알아내야 합니다.
    int length = StringCount(_NumberString);

    int result = 0;
    int b = 1;

    for (int i = 0; i < length - 1; i++)
    {
        b *= 10;
    }

    // 제곱을 만드는 pow라는 함수가 이미 있어요.
    for (int i = 0; i < length; i++)
    {
        char Ch = _NumberString[i];

        int Number = Ch - '0';

        //300 + 20 + 5 어떻게 더하지.
        result += Number * b;

        b /= 10;

        int a = 0;
    }

    // StringCount();
    //
    // * 10을 써야 합니다.
    // / 써야 합니다.
    // for문을 사용해야합니다.
    // 예외처리 안합니다.

    // char Ch = _NumberString[0];

    return result;
}

int main()
{

    int Number = StringToNumber("123123");

    NumberToString(120123, Arr);

    int a = printf_s("aaaa")

}