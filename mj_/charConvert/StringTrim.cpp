#include <iostream>

int StringCount(char* _Ptr)
{
   
    int Count = 0;

    while (_Ptr[Count])
    {
        ++Count;
    }

    return Count;
}

int LeftMoveString(char* _Ptr, int _Start)
{
    //stringcount ����ؼ�
    int Count = StringCount(_Ptr);

    /*_Ptr[0] = _Ptr[1];
    _Ptr[1] = _Ptr[2];
    _Ptr[2] = _Ptr[3];
    _Ptr[3] = _Ptr[4];
    _Ptr[4] = _Ptr[5];*/

    for (int i = _Start - 1; i < Count; i++)
    {
        if (1 >= _Start)
        {
            //��� �ڵ��� ��.
            _Start = 1;
        }

        char Ch = _Ptr[i];

        Ptr[i] = _Ptr[i + 1];

        }
            
    }

    return 0;
}


int main()
{
    char Arr[100] = "abcde";

    //Arr[0] = Arr[1];

    //2��° index���� ���� �������� ��ĭ�� �� �аڴ�.
    LeftMoveString(Arr, 2);
     
    std::cout << "Hello World!\n";
}
