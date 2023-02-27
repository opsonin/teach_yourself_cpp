#include <iostream>
using namespace std;

void myFunction();      // function prototype

int x = 5, y = 7;       // global variables
int main()
{
    cout << "x from main: " << x << endl;
    cout << "y from main: " << y << endl << endl;
    myFunction();
    cout << "Back from myFunction!\n\n";
    cout << "x from main: " << x << endl;
    cout << "y from main: " << y << endl;

    return 0;
}

void myFunction()
{
    int y = 10;

    cout << "x from myFunction: " << x << endl;
    cout << "y from myFunction: " << y << endl << endl;
}