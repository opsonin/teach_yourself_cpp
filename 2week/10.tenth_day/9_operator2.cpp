// operator++는 임시 개체를 반환한다.
typedef unsigned short USHORT;
#include <iostream>
using namespace std;

class Counter
{
public:
    Counter();
    ~Counter(){};
    USHORT GetItsVal() const { return itsVal; }
    void SetItsVal(USHORT x) { itsVal = x; }
    void Increment() { ++itsVal; }
    Counter operator++ ();
private:
    USHORT itsVal;
};

Counter::Counter():
itsVal(0)
{};

Counter Counter::operator++()
{
    ++itsVal;
    Counter temp;
    temp.SetItsVal(itsVal);

    return temp;
}

int main()
{
    Counter i;
    cout << "The value of i is " << i.GetItsVal() << endl;
    i.Increment();
    cout << "The value of i is " << i.GetItsVal() << endl;
    ++i;
    cout << "The value of i is " << i.GetItsVal() << endl;
    Counter a = ++i;
    cout << "The value of a: " << a.GetItsVal();
    cout << " and i: " << i.GetItsVal() << endl;

    return 0;
}