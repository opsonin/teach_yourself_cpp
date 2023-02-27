// Add 함수
typedef unsigned short USHORT;
#include <iostream>
using namespace std;

class Counter
{
public:
    Counter();
    Counter(USHORT initialValue);
    ~Counter(){};
    USHORT GetItsVal() const { return itsVal; }
    void SetItsVal(USHORT x) { itsVal = x; }
    Counter Add(const Counter &);
private:
    USHORT itsVal;
};

Counter::Counter(USHORT initialValue):
itsVal(initialValue)
{}

Counter::Counter():
itsVal(0)
{}

Counter Counter::Add(const Counter &rhs)
{
    return Counter(itsVal + rhs.GetItsVal());
}

int main()
{
    Counter varOne(2), varTwo(4), varThree;
    varThree = varOne.Add(varTwo);
    cout << "varOne: " << varOne.GetItsVal() << endl;
    cout << "varTwo: " << varTwo.GetItsVal() << endl;
    cout << "varThree: " << varThree.GetItsVal() << endl;

    return 0;
}