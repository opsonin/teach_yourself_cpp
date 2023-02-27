// 변환 연산자인 생성자
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
    private:
        USHORT itsVal;
};

Counter::Counter():itsVal(0){};
Counter::Counter(USHORT val):itsVal(val){};

int main()
{
    USHORT theShort = 5;
    Counter theCtr = theShort;
    cout << "theCtr: " << theCtr.GetItsVal() << endl;

    return 0;
}