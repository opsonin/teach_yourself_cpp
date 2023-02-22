// 개체에 대한 포인터 전달
#include <iostream>

using namespace std;

class SimpleCat
{
public:
    SimpleCat();
    SimpleCat(SimpleCat&);  // 복사 생성자
    ~SimpleCat();

    int GetAge() const { return itsAge; }    
    void SetAge(int age) { itsAge = age; }

private:
    int itsAge;
};

SimpleCat::SimpleCat()
{
    cout << "Simple Cat Constructor...\n";
    itsAge = 1;
}

SimpleCat::SimpleCat(SimpleCat&)
{
    cout << "Simple Cat Copy Constructor...\n";
}

SimpleCat::~SimpleCat()
{
    cout << "Simple Cat Destructor...\n";
}

const SimpleCat * const FunctionTwo(const SimpleCat * const theCat);

int main()
{
    cout << "Making a cat...\n";
    SimpleCat Frisky;
    cout << "Frisky is " << Frisky.GetAge() << " years old.\n";

    int age = 5;
    Frisky.SetAge(age);

    cout << "Change, Frisky is " << Frisky.GetAge() << " years old.\n";

    cout << "Calling Function Two...\n";
    FunctionTwo(&Frisky);

    cout << "Frisky is " << Frisky.GetAge() << " years old.\n";

    return 0;
}

// functionTwo, const 포인터 전달
const SimpleCat * const FunctionTwo(const SimpleCat * const theCat)
{
    cout << "Function Two. Returing...\n";
    cout << "Frisky is now " << theCat->GetAge();
    cout << " years old.\n";
    // theCat->SetAge(8);       const!

    return theCat;
}