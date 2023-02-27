#include <iostream>
using namespace std;

int main()
{
    unsigned short shortVar = 5;
    unsigned long longVar = 65535;
    long sVar = -65535;

    cout << "shortVar:\t" << shortVar;
    cout << "\tAddress of shortVar:";
    cout << &shortVar << "\n";

    cout << "longVar:\t" << longVar;
    cout << "\tAddress of longVar:";
    cout << &longVar << "\n";

    cout << "sVar:\t\t" << sVar;
    cout << "\tAddress of sVar:";
    cout << &sVar << "\n";

    return 0;
}