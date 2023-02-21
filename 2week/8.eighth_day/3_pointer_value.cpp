#include <iostream>
using namespace std;

typedef unsigned short int USHORT;

int main()
{
    unsigned short int myAge = 5, yourAge = 10;
    unsigned short int *pAge = &myAge;      // 포인터

    cout << "myAge:\t" << myAge << "\tyourAge:\t" << yourAge << "\n";
    cout << "&myAge:\t" << &myAge << "\t&yourAge:\t" << &yourAge << "\n";

    cout << "pAge:\t" << pAge << "\n";
    cout << "*pAge:\t" << *pAge << "\n";

    pAge = &yourAge;        // 포인터 재할당

    cout << "myAge:\t" << myAge << "\tyourAge:\t" << yourAge << "\n";
    cout << "&myAge:\t" << &myAge << "\t&yourAge:\t" << &yourAge << "\n";

    cout << "pAge:\t" << pAge << "\n";
    cout << "*pAge:\t" << *pAge << "\n";

    cout << "&pAge:\t" << &pAge << "\n";

    return 0;
}