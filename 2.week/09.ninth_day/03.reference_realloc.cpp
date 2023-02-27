// 참조의 재할당
#include <iostream>
using namespace std;

int main()
{
    int intOne;
    int &rSomeRef = intOne;

    intOne = 5;
    cout << "intOne:\t" << intOne << endl;
    cout << "rSomeRef:\t" << rSomeRef << endl;
    cout << "&intOne:\t" << &intOne << endl;
    cout << "&rSomeRef:\t" << &rSomeRef << endl;

    int intTwo = 0;
    rSomeRef = intTwo;      // not what you think! (참조는 재할당 될 수 없다.)
    cout << "\nintOne:\t" << intOne << endl;
    cout << "intTwo:\t" << intTwo << endl;
    cout << "rSomeRef:\t" << rSomeRef << endl;
    cout << "&intOne:\t" << &intOne << endl;
    cout << "&intTwo:\t" << &intTwo << endl;
    cout << "&rSomeRef:\t" << &rSomeRef << endl;

    return 0;
}