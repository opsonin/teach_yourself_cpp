// 자유 저장 영역에 개체 만들기
#include <iostream>
using namespace std;

class SimpleCat
{
    public:
        SimpleCat();
        ~SimpleCat();
    private:
        int itsAge;
};

SimpleCat::SimpleCat()
{
    cout << "Constructor called.\n";
    itsAge = 1;
}

SimpleCat::~SimpleCat()
{
    cout << "Destructor called.\n";
}

int main()
{
    cout << "SimpleCat Frisky...\n";
    SimpleCat Frisky;
    cout << "SimpleCat *pRags = new SimpleCat...\n";
    SimpleCat *pRags = new SimpleCat;
    cout << "delete pRags...\n";
    delete pRags;
    cout << "Exiting, watch Fisky go...\n";

    return 0;
}