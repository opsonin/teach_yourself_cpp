// 생성자와 소멸자
#include <iostream>
using namespace std;

enum BREED { YORKIE, CAIRN, DANDIE, SHETLAND, DOBERMAN, LAB };

class Mammal
{
public:
    // 생성자
    Mammal();
    ~Mammal();

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
    Dog();
    ~Dog();

    // accessor
    BREED GetBread() const { return itsBreed; }
    void SetBreed(BREED breed) { itsBreed = breed; }

    // anoter method
    void WagTail() { cout << "Tail wagging...\n"; }
    void BegForFood() { cout << "Begging for food...\n"; }

private:
    BREED itsBreed;
};

Mammal::Mammal():
itsAge(1),
itsWeight(5)
{
    cout << "Mammal constructor...\n";
}

Mammal::~Mammal()
{
    cout << "Mammal destructor...\n";
}

Dog::Dog():
itsBreed(YORKIE)
{
    cout << "Dog constructor...\n";
}

Dog::~Dog()
{
    cout << "Dog destructor...\n";
}

int main()
{
    Dog fido;
    fido.Speak();
    fido.WagTail();
    cout << "Fido is " << fido.GetAge() << " years old.\n";

    return 0;
}