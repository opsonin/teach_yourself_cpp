// 함수 원형의 사용예

typedef unsigned short USHORT;

#include <iostream>
using namespace std;

USHORT FindArea(USHORT length, USHORT width);       // 함수 원형(prototype)

int main()
{
    USHORT lengthOfYard;
    USHORT widthOfYard;
    USHORT areaOfYard;

    cout << "How wide is your yard? ";
    cin >> widthOfYard;
    cout << "How long is your yard? ";
    cin >> lengthOfYard;

    areaOfYard = FindArea(lengthOfYard, widthOfYard);

    cout << "\nYour yard is ";
    cout << areaOfYard;
    cout << " square feet\n\n";

    return 0;
}

USHORT FindArea(USHORT l, USHORT w)
{
    return l * w;
}
