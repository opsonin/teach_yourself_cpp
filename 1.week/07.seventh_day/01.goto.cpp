#include <iostream>
using namespace std;

int main()
{
    int counter = 0;        // counter 초기화
    loop:   counter++;      // 루프의 꼭대기
    cout << "conter: " << counter << endl;
    if (counter < 5)        // 값을 검사
        goto loop;          // 꼭대기로 점프
    
    cout << "Complete. Counter: " << counter << ".\n";

    return 0;
}