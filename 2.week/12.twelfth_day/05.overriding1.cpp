// 파생 클래스에서 기반 클래스 메서드 재정의하기(overriding)
#include <iostream>
using namespace std;

enum BREED { YORKIE, CAIRN, DANDIE, SHETLAND, DOBERMAN, LAB };

class Mammal
{
public:
    // 생성자
    Mammal() { cout << "Mammal constructor...\n"; }
    ~Mammal() { cout << "Mammal destructor...\n"; }

    // 다른 메서드
    void Speak() const { cout << "Mammal sound!\n"; }
    void Sleep() const { cout << "shhh. I'm sleeping.\n"; }

protected:
    int itsAge;
    int itsWeight;
};

class Dog : public Mammal
{
public:
    // 생성자
    Dog() { cout << "Dog constructor...\n"; }
    ~Dog() { cout << "Dog destructor...\n"; }

    // 다른 메서드
    void WagTail() { cout << "Tail wagging...\n"; }
    void BegForFood() { cout << "Begging for food...\n"; }
    void Speak() const { cout << "Woof!\n"; }

private:
    BREED itsBreed;
};

int main()
{
    Mammal bigAnimal;
    Dog fido;
    bigAnimal.Speak();
    fido.Speak();

    return 0;
}