#include <iostream>
using namespace std;

// 형과 정의
enum BOOL { FALSE, TRUE };
typedef unsigned short int USHORT;

// 원형
USHORT menu();
void DoTaskOne();
void DoTaskMany(USHORT);

int main()
{
    BOOL exit = FALSE;
    for (;;)
    {
        USHORT choice = menu();
        switch (choice)
        {
            case (1):
                    DoTaskOne();
                    break;
            case (2):
                    DoTaskMany(2);
                    break;
            case (3):
                    DoTaskMany(3);
                    break;
            case (4):
                    continue;       // 필요없는 코드
            case (5):
                    exit = TRUE;
                    break;
            default:
                    cout << "Please select again!\n";
                    break;
        }
        if (exit)
            break;
    }   // 무한루프의 끝
    return 0;
}   // main()의 끝

USHORT menu()
{
    USHORT choice;

    cout << " **** Menu ****\n\n";
    cout << " (1) Choice one.\n";
    cout << " (2) Choice two.\n";
    cout << " (3) Choice three.\n";
    cout << " (4) Redisplay menu.\n";
    cout << " (5) Quit.\n\n";
    cout << ": ";
    cin >> choice;

    return choice;
}

void DoTaskOne()
{
    cout << "Task One!\n";
}

void DoTaskMany(USHORT which)
{
    if (which == 2)
        cout << "Task Two!\n";
    else
        cout << "Task Three!\n";
}