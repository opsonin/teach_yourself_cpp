// 배열의 끝을 지나는 값을 입역할 경우
// 무슨 일이 일어날 지 불 수 있는 예
#include <iostream>
using namespace std;

int main()
{
    long sentinelOne[3];
    long TargetArray[25];
    long sentinelTwo[3];
    int i;
    for (i=0; i<3; i++)
        sentinelOne[i] = sentinelTwo[i] = 0;
    
    for (i=0; i<25; i++)
        TargetArray[i] = 0;
    
    cout << "Test 1: \n";   // 현재 값 테스트 (0이 되어야 한다.)
    cout << "TargetArray[0]: " << TargetArray[0] << "\n";
    cout << "TargetArray[24]: " << TargetArray[24] << "\n\n";

    for (i = 0; i < 3; i++)
    {
        cout << "sentinelOne[" << i << "]: ";
        cout << sentinelOne[i] << "\n";
        cout << "sentinelTwo[" << i << "]: ";
        cout << sentinelTwo[i] << "\n";
    }

    cout << "\n Assingning...";
    for (i = 0; i <= 25; i++)
        TargetArray[i] = 20;

    cout << "\nTest 2: \n";
    cout << "TargetArray[0]: " << TargetArray[0] << "\n";
    cout << "TargetArray[24]: " << TargetArray[24] << "\n";
    cout << "TargetArray[25]: " << TargetArray[25] << "\n\n";

    for (i = 0; i < 3; i++)
    {
        cout << "sentinelOne[" << i << "]: " ;
        cout << sentinelOne[i] << "\n";
        cout << "sentinelTwo[" << i << "]: ";
        cout << sentinelTwo[i] << "\n";
    }

    return 0;
}