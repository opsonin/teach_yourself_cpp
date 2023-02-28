// 개체의 배열
#include <iostream>
using namespace std;

class CAT
{
    public:
        CAT() { itsAge = 1; itsWeight = 5; }
        ~CAT(){};
        int GetAge() const { return itsAge; }
        int GetWeight() const { return itsWeight; }
        void SetAge(int age) { itsAge = age; }
    private:
        int itsAge;
        int itsWeight;
};

int main()
{
    CAT Litter[5];
    int i;
    for (i = 0; i < 5; i++)
        Litter[i].SetAge(2*i + 1);
        
    for (i = 0; i < 5; i++)
    {
        cout << "CAT #" << i+1 << ": ";
        cout << Litter[i].GetAge() << endl;
    }

    return 0;
}