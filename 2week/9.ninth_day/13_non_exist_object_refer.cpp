// 더 이상 존재하지 않는 개체에 대한 참조 반환하기
// Compile 오류 발생
#include <iostream>

using namespace std;

class SimpleCat
{
public:
    SimpleCat(int age, int weight);
    ~SimpleCat();

    int GetAge() { return itsAge; }
    int GetWeight() { return itsWeight; }
    void SetAge(int age) { itsAge = age; }
    void SetWeight(int weight) { itsWeight = weight; }
private:
    int itsAge;
    int itsWeight;
};

SimpleCat::SimpleCat(int age, int weight):
itsAge(age), itsWeight(weight) {}

SimpleCat &TheFunction();

int main()
{
    SimpleCat &rCat = TheFunction();
    
    int age = rCat.GetAge();
    cout << "rCat is " << age << " years old.\n";

    return 0;
}

SimpleCat &TheFunction()
{
    SimpleCat Frisky(5,9);

    return Frisky;
}