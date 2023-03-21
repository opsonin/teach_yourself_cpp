// 파생 클래스의 생성자 다중 정의
#include <iostream>
using namespace std;

enum BREED { YORKIE, CAIRN, DANDIE, SHETLAND, DOBERMAN, LAB };

class Mammal
{
public:
    // 생성자
    Mammal();
    Mammal(int age);
    ~Mammal();

    // accessor
    int GetAge() const { return itsAge; }
    void SetAge(int age) { itsAge = age; }
    int GetWeight() const { return itsWeight; }
    void SetWeight(int weight) { itsWeight = weight; }

    // another method
    void Speak() const { cout << "Mammal sound!\n"; }
    void Sleep() const { cout << "shhh. I'm sleeping.\n"; }

protected:
    int itsAge;
    int itsWeight;
};

class Dog : public Mammal
{
public:
    Dog();
    Dog(int age);
    Dog(int age, int weight);
    Dog(int age, BREED breed);
    Dog(int age, int weight, BREED breed);
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

Mammal::Mammal(int age):
itsAge(age),
itsWeight(5)
{
    cout << "Mammal(int) constructor...\n";
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

Dog::Dog(int age):
Mammal(age),
itsBreed(YORKIE)
{
    cout << "Dog(int) constructor...\n";
}

Dog::Dog(int age, int weight):
Mammal(age),
itsBreed(YORKIE)
{
    itsWeight = weight;
    cout << "Dog(int, int) constructor...\n";
}

Dog::Dog(int age, int weight, BREED breed):
Mammal(age),
itsBreed(breed)
{
    itsWeight = weight;
    cout << "Dog(int, int, BREED) constructor...\n";
}

Dog::Dog(int age, BREED breed):
Mammal(age),
itsBreed(breed)
{
    cout << "Dog(int, BREED) constructor...\n";
}

Dog::~Dog()
{
    cout << "Dog destructor...\n";
}

int main()
{
    Dog fido;
    Dog rover(5);
    Dog buster(6, 8);
    Dog yorkie(3, YORKIE);
    Dog dobbie(4, 20, DOBERMAN);
    fido.Speak();
    fido.WagTail();
    cout << "Fido is " << fido.GetAge() << " years old.\n";
    cout << "Dobbie weights ";
    cout << dobbie.GetWeight() << " pounds\n";

    return 0;
}