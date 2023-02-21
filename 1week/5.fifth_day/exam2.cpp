#include <iostream>
using namespace std;

int myFunc(int x, int y);

int main()
{
    int x, y, z;
    
    cout << "input x y: ";
    cin >> x;
    cin >> y;
    
    z = myFunc(x, y);
    cout <<  x << " ^ " << y << " = " << z << "\n";

    return 0;
}

// 재귀함수를 이용한 x ^ y의 값 전달
int myFunc(int x, int y)
{
    if (y == 1)
        return x;
    else
        return x * myFunc(x, y - 1);
}