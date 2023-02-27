// 블록 내부로만 그 범위를 가지는 변수를 볼 수 있다.
#include <iostream>
using namespace std;

void myFunc();      // function prototype

int main()
{
    int x = 5;
    cout << "In main x is: " << x;
    myFunc();
    
    cout << "Back in main, x is : " << x;

    return 0;
}

void myFunc()
{
    int x = 8;

    cout << "\nIn myFunc, local x: " << x << endl;

    {
        cout << "\nIn block in myFunc, x is : " << x << endl;

        int x = 9;
        cout << "\nVery local x: " << x;
    }

    cout << "\nOut of block, in myFunc, x: " << x << endl << endl;
}