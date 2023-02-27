#include <iostream>

using namespace std;

int main()
{
    for (int i = 32; i < 128; i++)
    {
        // 정수32에서 127까지의 문자 값을 출력
        cout << (char) i;        
    }
    return 0;
}