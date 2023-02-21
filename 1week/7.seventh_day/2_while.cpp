#include <iostream>
using namespace std;

int main()
{
    int counter = 0;        // 조건 초기화

    while(counter < 5)      // 참이 될 때까지 조건 검사
    {
        counter++;          // 루프의 본체
        cout << "counter: " << counter << endl;
    }

    cout << "Complete. Counter: " << counter << ".\n";

    return 0;
}