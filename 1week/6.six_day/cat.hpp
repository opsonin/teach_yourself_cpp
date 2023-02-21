#include <iostream>
using namespace std;

class Cat
{
    public:
        Cat(int initialAge);
        ~Cat();
        int GetAge() { return itsAge; }         // 인라인!
        void SetAge(int age) { itsAge = age; }  // 인라인!
        void Meow() { cout << "Meow.\n"; }      // 인라인!
    private:
        int itsAge;
};