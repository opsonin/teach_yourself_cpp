// 길 잃은 포인터 만들기
#include <iostream>
using namespace std;

typedef unsigned short int USHORT;

int main()
{
    USHORT *pInt = new USHORT;
    *pInt = 10;
    cout << "*pInt: " << *pInt << endl;
    delete pInt;

    pInt = 0;
    long *pLong = new long;
    *pLong = 90000;
    cout << "*pLong: " << *pLong << endl;

    *pInt = 20;     // uh oh, this was deleted!
    cout << "*pInt: " << *pInt << endl;
    cout << "*pLong: " << *pLong << endl;
    delete pLong;

    return 0;
}