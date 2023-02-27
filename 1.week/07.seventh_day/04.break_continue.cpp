#include <iostream>
using namespace std;

int main()
{
    unsigned short small;
    unsigned long large;
    unsigned long skip;
    unsigned long target;
    const unsigned short MAXSMALL = 65535;

    cout << "Enter a small number: ";
    cin >> small;
    cout << "Enter a large number: ";
    cin >> large;
    cout << "Enter a skip number: ";
    cin >> skip;
    cout << "Enter a target number: ";
    cin >> target;

    cout << "\n";

    // 루프에 대한 세 가지 중단 조건을 설정한다.
    while (small < large && large > 0 && small < MAXSMALL)
    {
        small++;

        if (small % skip == 0)      // 감소를 뛰어넘을 것인가?
        {
            cout << "skpping on " << small << endl;
            continue;
        }

        if (large == target)        // target과 정확히 일치하는가?
        {
            cout << "Target reached!";
            break;
        }

        large-=2;
    }   // while 루프의 끝

    cout << "\nSmall: " << small << " Large: " << large << endl;

    return 0;
}