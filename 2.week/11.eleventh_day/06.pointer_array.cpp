// 개체에 대한 포인터의 배열
#include <iostream>
using namespace std;

class CAT
{
    public:
        CAT() { itsAge = 1; itsWeight = 5; }
        ~CAT(){};
        int GetAge() { return itsAge; }
        int GetWeight() const { return itsWeight; }
        void SetAge(int age) { itsAge = age; }
    private:
        int itsAge;
        int itsWeight;
};

int main()
{
    CAT *Family[500];
    int i;
    CAT *pCat;
    for (i = 0; i < 500; i++)
    {
        pCat = new CAT;
        pCat->SetAge(2*i +1);
        Family[i] = pCat;
    }

    for (i = 0; i < 500; i++)
    {
        cout << "Cat #" << i+1 << ": ";
        cout << Family[i]->GetAge() << endl;
    }

    return 0;
}