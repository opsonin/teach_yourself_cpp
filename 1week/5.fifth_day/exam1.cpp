#include <iostream>
using namespace std;

int myFunc(unsigned short int x, unsigned short int y);

int main()
{
    unsigned short int x, y;
    int z;
    cout << "input x, y : ";
    cin >> x;
    cin >> y;

    z = myFunc(x ,y);
    cout <<  x << " / " << y << " = " << z << "\n";

    return 0;
}

int myFunc(unsigned short int x, unsigned short int y)
{
    if (y == 0)
        return (int)-1;
    else
        return (int)(x / y);
}