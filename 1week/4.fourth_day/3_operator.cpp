// 전치와 후치 방식의 증가, 감소 연산자의 사용례
#include <iostream>

using namespace std;

int main()
{
    int myAge = 39;     // 두 개의 정수를 초기화
    int yourAge = 39;
    cout << "I am: " << myAge << " years old.\n";
    cout << "You are: " << yourAge << " years old.\n";
    myAge++;        // 후치 증가
    ++yourAge;      // 전치 증가
    cout << "One year passes...\n";
    cout << "I am: " << myAge << " years old.\n";
    cout << "You are: " << yourAge << " years old.\n";
    cout << "Another year passes\n";
    cout << "I am: " << myAge++ << " years old.\n";
    cout << "You are: " << ++yourAge << " years old.\n";
    cout << "Let's print it again.\n";
    cout << "I am: " << myAge << " years old.\n";
    cout << "You are: " << yourAge << " years old.\n";

    return 0;
}