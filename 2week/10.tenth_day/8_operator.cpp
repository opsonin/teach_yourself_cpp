// Counter 클래스
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
    void operator++() { ++itsVal; }     // 전치 연산자 다중 정의
    /* 전치 연산자 선언방법
        returnType Operator op (parameters)
    */
private:
    USHORT itsVal;
};

Counter::Counter():
itsVal(0)
{};

int main()
{
    Counter i;
    cout << "The value of i is " << i.GetItsVal() << endl;
    i.Increment();
    cout << "The value of i is " << i.GetItsVal() << endl;
    ++i;
    cout << "The value of i is " << i.GetItsVal() << endl;

    return 0;
}