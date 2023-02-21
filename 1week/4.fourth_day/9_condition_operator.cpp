// 조건 연산자의 예
#include <iostream>

using namespace std;

int main()
{
    int x, y, z;
    cout << "Enter tow number.\n";
    cout << "First: ";
    cin >> x;
    cout << "Second: ";
    cin >> y;
    cout << "\n";

    if (x > y)
        z = x;
    else
        z = y;

    cout << "z: " << z << endl;
    z = (x > y) ? x : y;

    cout << "z: " << z << endl;
    
    return 0;
}