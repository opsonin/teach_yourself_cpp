// operator++는 이름 없는 임시 개체를 반환한다.
typedef unsigned short USHORT;
#include <iostream>
using namespace std;

class Counter
{
public:
    Counter();
    Counter(USHORT val);
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

Counter::Counter(USHORT val):
itsVal(val)
{}

Counter Counter::operator++()
{
    ++itsVal;
    
    return Counter(itsVal);
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