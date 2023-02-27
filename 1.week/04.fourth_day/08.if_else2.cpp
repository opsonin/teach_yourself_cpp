// 중첩된 if 문에서 중괄호가 중요한 이유를 볼 수 있는 예
#include <iostream>

using namespace std;

int main()
{
    int x;
    cout << "Enter a number less than 10 or greater than 100: ";
    cin >> x;
    cout << "\n";

    if (x > 10)
    {
        if (x > 100)
            cout << "More than 100, Thanks!\n";
    }
    else    // else가 의도한 것이 아님
        cout << "Less than 10, Thanks!\n";
    
    return 0;
}