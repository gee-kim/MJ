

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
    // ���� ������ �˾Ƴ��� �մϴ�.
    int length = StringCount(_NumberString);

    int result = 0;
    int b = 1;

    for (int i = 0; i < length - 1; i++)
    {
        b *= 10;
    }

    // ������ ����� pow��� �Լ��� �̹� �־��.
    for (int i = 0; i < length; i++)
    {
        char Ch = _NumberString[i];

        int Number = Ch - '0';

        //300 + 20 + 5 ��� ������.
        result += Number * b;

        b /= 10;

        int a = 0;
    }

    // StringCount();
    //
    // * 10�� ��� �մϴ�.
    // / ��� �մϴ�.
    // for���� ����ؾ��մϴ�.
    // ����ó�� ���մϴ�.

    // char Ch = _NumberString[0];

    return result;
}

int main()
{

    int Number = StringToNumber("123123");

    NumberToString(120123, Arr);

    int a = printf_s("aaaa")

}