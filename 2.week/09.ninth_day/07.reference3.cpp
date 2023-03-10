// 참조를 사용한 참조에 의한 전달을 볼 수 있다.
#include <iostream>
using namespace std;

void swap(int &x, int &y);

int main()
{
    int x = 5, y = 10;

    cout << "Main. Before swap, x = " << x << ", y = " << y << endl;
    swap(x, y);
    cout << "Main. After swap, x = " << x << ", y = " << y << endl;

    return 0;
}

void swap(int &rx, int &ry)
{
    int temp;

    cout << "Swap. Before swap, x = " << rx << ", y = " << ry << endl;

    temp = rx;
    rx = ry;
    ry = temp;

    cout << "Swap. After swap, x = " << rx << ", y = " << ry << endl;
}