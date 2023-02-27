// 변환 연산자
#include <iostream>
using namespace std;

typedef unsigned short USHORT;

class Counter
{
    public:
        Counter();
        Counter(USHORT val);
        ~Counter(){};
        USHORT GetItsVal() const { return itsVal; }
        void SetItsVal(USHORT x) { itsVal = x; }
        operator unsigned short();
    private:
        USHORT itsVal;
};

Counter::Counter():itsVal(0){};
Counter::Counter(USHORT val):itsVal(val){};

Counter::operator unsigned short()
{
    return (USHORT (itsVal));
}

int main()
{
    Counter ctr(5);
    USHORT theShort = ctr;
    cout << "theShort: " << theShort << endl;

    return 0;
}