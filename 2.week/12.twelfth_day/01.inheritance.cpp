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
    int GetAge() const;
    void SetAge(int);
    int GetWeight() const;
    void SetWeight(int);

    // anoter method
    void Speak();
    void Sleep();

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
    BREED GetBread() const;
    void SetBreed(BREED);

    // anoter method
    // WagTail();
    // BegForFood();
protected:
    BREED itsBreed;
};