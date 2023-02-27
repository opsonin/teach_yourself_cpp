// 함수에서 여러 값을 반환하기
#include <iostream>
using namespace std;

typedef unsigned short USHORT;
enum ERROR_CODE { SUCCESS, ERROR };

ERROR_CODE Factor(USHORT, USHORT&, USHORT&);

int main()
{
    USHORT number, squared, cubed;
    ERROR_CODE result;

    cout << "Enter a number (0 - 20): ";
    cin >> number;

    result = Factor(number, squared, cubed);

    if (result == SUCCESS)
    {
        cout << "number: " << number << endl;
        cout << "squared: " << squared << endl;
        cout << "cubed: " << cubed << endl;
    }
    else
        cout << "Error encountered!!\n";        
    
    return 0;
}

ERROR_CODE Factor(USHORT n, USHORT &rSquared, USHORT &rCubed)
{
    if (n > 20)
        return ERROR;       // 단순한 오류 코드
    else
    {
        rSquared = n*n;
        rCubed = n*n*n;
        return SUCCESS;
    }
}