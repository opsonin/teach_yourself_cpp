#include <iostream>

using namespace std;

int main()
{
    // 열거형 상수 enum은 정수값을 가진다.
    // 값을 지정하지 않으면 첫번째 상수는 0의 값을 가진다.
    enum Days {Sunday, Monday, Tuseday, Wednesday, Thursday, Friday, Saturday};

    Days DayOff;
    int x;

    cout << "What day would you like off (0-6)? ";
    cin >> x;
    DayOff = Days(x);

    if (DayOff == Sunday || DayOff == Saturday)
    {
        cout << "\nYou're already off on weekends!\n";
    }
    else
    {
        cout << "\nOkay, I'll put in the vacation day.\n";
    }

    return 0;
}