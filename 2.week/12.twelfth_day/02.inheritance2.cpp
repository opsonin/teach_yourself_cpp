#include <iostream>
using namespace std;

enum BREED { YORKIE, CAIRN, DANDIE, SHETLAND, DOBERMAN, LAB };

class Mammal
{
public:
    // 생성자
    Mammal():itsAge(2), itsWeight(5){}
    ~Mammal(){}

    // accessor
    int GetAge() const { return itsAge; }
    void SetAge(int age) { itsAge = age; }
    int GetWeight() const { return itsWeight; }
    void SetWeight(int weight) { itsWeight = weight; }

    // another method
    void Speak() const { cout << "Mamal sound!\n"; }
    void Sleep() const { cout << "shhh. I'm sleeping.\n"; }

protected:
    int itsAge;
    int itsWeight;
};

class Dog : public Mammal
{
public:
    Dog():itsBreed(YORKIE){}
    ~Dog(){}

    // accessor
    BREED GetBread() const { return itsBreed; }
    void SetBreed(BREED breed) { itsBreed = breed; }

    // anoter method
    void WagTail() { cout << "Tail wagging...\n"; }
    void BegForFood() { cout << "Begging for food...\n"; }

private:
    BREED itsBreed;
};

int main()
{
    Dog fido;
    fido.Speak();
    fido.WagTail();
    cout << "Fido is " << fido.GetAge() << " years old.\n";

    return 0;
}