// 개체에 대한 포인터 전달
#include <iostream>
using namespace std;

class SimpleCat
{
    public:
        SimpleCat();                // 생성자
        SimpleCat(SimpleCat&);      // 복사 생성자(copy constructor)
        ~SimpleCat();               // 소멸자
};

SimpleCat::SimpleCat()
{
    cout << "Simple Cat Constructor...\n";
}

SimpleCat::SimpleCat(SimpleCat&)
{
    cout << "Simple Cat Copy Constructor...\n";
}

SimpleCat::~SimpleCat()
{
    cout << "Simple Cat Destructor...\n";
}

SimpleCat FunctionOne(SimpleCat theCat);
SimpleCat* FunctionTwo(SimpleCat *theCat);

int main()
{
    cout << "Making a cat...\n";
    SimpleCat Frisky;
    cout << "Calling FunctionOne...\n";
    FunctionOne(Frisky);
    cout << "Calling FunctionTwo...\n";
    FunctionTwo(&Frisky);

    return 0;
}

// FunctionOne, passes by value
SimpleCat FunctionOne(SimpleCat theCat)
{
    cout << "Funtion One. Returing...\n";
    return theCat;
}

// FunctioTwo, passes by reference
SimpleCat* FunctionTwo(SimpleCat *theCat)
{
    cout << "Function Two. Returing...\n";
    return theCat;
}