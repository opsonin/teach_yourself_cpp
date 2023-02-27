#include <iostream>
using namespace std;

typedef unsigned short int USHORT;

int main()
{
    USHORT myAge;       // 변수
    USHORT *pAge = 0;   // 포인터
    myAge = 5;
    cout << "myAge: " << myAge << "\n";

    pAge = &myAge;      // myAge의 주소를 pAge에 할당
    cout << "*pAge: " << *pAge << "\n\n";

    cout << "*pAge = 7\n";
    *pAge = 7;          // myAge에 7을 할당

    cout << "*pAge: " << *pAge << "\n";
    cout << "myAge: " << myAge << "\n\n";

    cout << "myAge = 9\n";
    myAge = 9;

    cout << "myAge: " << myAge << endl;
    cout << "*pAge: " << *pAge << endl;

    return 0;
}