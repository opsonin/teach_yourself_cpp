// 값에 의한 전달을 볼 수 있는 예
#include <iostream>
using namespace std;

void swap(int x, int y);

int main()
{
    int x = 5, y = 10;

    cout << "Main. Before swqp, x: " << x << " y: " << y << "\n";
    swap(x, y);
    cout << "Main. After swap, x: " << x << " y: " << y << "\n";
    return 0;
}

void swap(int x, int y)
{
    int temp;

    cout << "Swap, Before swap, x: " << x << " y: " << y << "\n";

    temp = x;
    x = y;
    y = temp;

    cout << "Swap, After swap x: " << x << " y: " << y << "\n";
}