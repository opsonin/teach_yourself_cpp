// 이 코드는 컴파일되지 않을 것이다.
#include <iostream>
using namespace std;

typedef unsigned short USHORT;

class Counter
{
    public:
        Counter();
        ~Counter(){};
        USHORT GetItsVal() const { return itsVal; }
        void SetItsVal(USHORT x) { itsVal = x; }
    private:
        USHORT itsVal;
};

Counter::Counter():itsVal(0){};

int main()
{
    USHORT theShort = 5;
    Counter theCtr = theShort;
    cout << "theCtr: " << theCtr.GetItsVal() << endl;

    return 0;
}