#include <iostream>

using namespace std;

int main()
{
    /*
        unsigned short int의 값 : 0에서 65,535
        short int의 값 : -32,768에서 32,767
        int(16bit)의 값 : -32,768에서 32,767
        int(32bit)의 값 : -2,147,483,648에서 2,147,483,647
    */
    unsigned short int Width = 32769, Length;
    Length = 2;

    // unsigned short 를 만들고 Width와 Length를 곱한 결과로 초기화한다.
    unsigned short int Area = Width * Length;

    cout << "Width: " << Width << "\n";
    cout << "Length: " << Length << endl;
    cout << "Area: " << Area << endl;

    return 0;
}