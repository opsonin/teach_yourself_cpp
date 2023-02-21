#include <iostream>

using namespace std;

int main()
{
    // int는 컴퓨터에 따라 2 또는 4 bytes가 된다.
    cout << "The size of an int is: \t\t" << sizeof(int) << " bytes.\n";
    cout << "The size of a unsigned short int is: \t" << sizeof(unsigned short) << " bytes.\n";
    cout << "The size of a short int is: \t" << sizeof(short) << " bytes.\n";
    cout << "The size of a long is: \t\t" << sizeof(long) << " bytes.\n";
    cout << "The size of a char is: \t\t" << sizeof(char) << " bytes.\n";
    cout << "The size of a float is: \t" << sizeof(float) << " bytes.\n";
    cout << "The size of a double is: \t" << sizeof(double) << " bytes.\n";

    return 0;
}