// 값으로 전달할 경우의 데이터 잘라내기
#include <iostream>
using namespace std;

enum BOOL { FALSE, TRUE };

class Mammal
{
    public:
        Mammal():itsAge(1) {}
        ~Mammal(){}
        virtual void Speak() const { cout << "Mammal speak!\n"; }
    protected:
        int itsAge;
};

class Dog : public Mammal
{
    public:
        void Speak() const { cout << "Woof!\n"; }
};

class Cat : public Mammal
{
    public:
        void Speak() const { cout << "Meow!\n"; }
};

void ValueFunction(Mammal);
void PtrFunction(Mammal*);
void RefFunction(Mammal&);

int main()
{
    Mammal* ptr = 0;
    int choice;
    while (1)
    {
        BOOL fQuit = FALSE;
        cout << "(1)dog (2)cat (0)Quit: ";
        cin >> choice;
        switch (choice)
        {
            case 0: fQuit = TRUE; break;
            case 1: ptr = new Dog; break;
            case 2: ptr = new Cat; break;
            default: ptr = new Mammal; break;
        }
        if (fQuit)
            break;
        PtrFunction(ptr);
        RefFunction(*ptr);
        ValueFunction(*ptr);
    }

    return 0;
}

void ValueFunction(Mammal MammalValue)
{
    MammalValue.Speak();
}

void PtrFunction(Mammal *pMammal)
{
    pMammal->Speak();
}

void RefFunction(Mammal &rMammal)
{
    rMammal.Speak();
}