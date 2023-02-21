// 힙에 있는 개체의 멤버 엑세스
#include <iostream>
using namespace std;

class SimpleCat
{
    public:
        SimpleCat() { itsAge = 2; }
        ~SimpleCat() {};
        int GetAge() const { return itsAge; }
        void SetAge(int age) { itsAge = age; }
    private:
        int itsAge;
};

int main()
{
    SimpleCat *Frisky = new SimpleCat;
    cout << "Frisky is " << Frisky->GetAge() << " years old.\n";
    Frisky->SetAge(5);
    cout << "Frisky is " << Frisky->GetAge() << " years old.\n";
    delete Frisky;

    return 0;
}