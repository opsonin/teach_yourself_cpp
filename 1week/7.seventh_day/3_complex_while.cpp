#include <iostream>
using namespace std;

int main()
{
    unsigned short small;
    unsigned long large;
    const unsigned short MAXSMALL = 65535;

    cout << "Enter a small number: ";
    cin >> small;
    cout << "Enter a large number: ";
    cin >> large;

    cout << "small: " << small << "...";

    // 각 반복에 대해 세 개의 조건을 검사한다.
    while(small < large && large > 0 && small < MAXSMALL)
    {
        if (small % 5000 == 0)      // 5000행마다 점을 찍는다.
            cout << ".";
        small++;

        large-=2;
    }

    cout << "\nSmall: " << small << " Large: " << large << endl;

    return 0;
}