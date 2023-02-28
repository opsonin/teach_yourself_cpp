// 상수와 열거형으로 배열 크기 지정하기
#include <iostream>
using namespace std;

int main()
{
    enum WeekDays { Sun, Mon, Tue, Wed, Thu, Fri, Sat, DaysInWeek };
    int ArrayWeek[DaysInWeek] = { 10, 20, 30, 40, 50, 60, 70};

    cout << "the value at Tuesday is: " << ArrayWeek[Tue] << "\n\n";

    for (int i = 0; i < 7; i++)
    {
        cout << "The value at ArrayWeek[" << i << "] is : " << ArrayWeek[i] << "\n";
    }

    return 0;
}