// 복잡하고 중첩된 if 문의 예
#include <iostream>

using namespace std;

int main()
{
    // 두 개의 숫자를 입력할 것을 요구하고
    // 숫자들을 bigNumber와 littleNumber에 할당한다.
    // bigNumber가 littleNumber보다 같거나 크면
    // 그 숫자들이 나머지 없이 나누어지는지를 알아본다.
    // 만약 그렇다면, 그 숫자들이 같은지 알아본다.
    int firstNumber, secondNumber;
    cout << "Enter two numbers.\nFirst: ";
    cin >> firstNumber;
    cout << "\nSecond: ";
    cin >> secondNumber;
    cout << "\n\n";

    if (firstNumber >= secondNumber)
    {
        if ((firstNumber % secondNumber) == 0)  // evenly divisible?
        {
            if (firstNumber == secondNumber)
                cout << "They are the same!\n";
            else
                cout << "They are evenly divisible!\n";
        }
        else
        {
            cout << "They are not evenly divisible!\n";
        }
    }
    else
    {
        cout << "Hey! The second one is larger!\n";
    }

    return 0;
}