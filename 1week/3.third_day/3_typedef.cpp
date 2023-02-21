/*
    typedef 키워드 사용예
*/

#include <iostream>

using namespace std;

typedef unsigned short int USHORT;      // typedef 정의

int main()
{
    USHORT Width = 5;
    USHORT Length;
    Length = 10;
    USHORT Area = Width * Length;
    cout << "Width: " << Width << endl;
    cout << "Length: " << Length << endl;
    cout << "Area: " << Area << endl;

    return 0;
}