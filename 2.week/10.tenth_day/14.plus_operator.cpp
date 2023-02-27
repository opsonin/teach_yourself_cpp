// 연산자 플러스(+) 다중 정의
#include <iostream>
using namespace std;

typedef unsigned short USHORT;

class Counter
{
    public:
        Counter();
        Counter(USHORT initialVal);
        ~Counter(){};
        USHORT GetItsVal() const { return itsVal; }
        void SetItsVal(USHORT x) { itsVal = x; }
        Counter operator+ (const Counter &);
    private:
        USHORT itsVal;
};

Counter::Counter(USHORT initialVal)
{
    itsVal = initialVal;
}

Counter::Counter():
itsVal(0) {};

Counter Counter::operator+ (const Counter &rhs)
{
    return Counter(itsVal + rhs.GetItsVal());
}

int main()
{
    Counter varOne(2), varTwo(4), varThree;
    varThree = varOne + varTwo;
    cout << "varOne: " << varOne.GetItsVal() << endl;
    cout << "varTwo: " << varTwo.GetItsVal() << endl;
    cout << "varThree: " << varThree.GetItsVal() << endl;

    return 0;
}