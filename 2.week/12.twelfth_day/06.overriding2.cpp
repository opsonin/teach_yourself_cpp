// 메서드 숨기기
#include <iostream>
using namespace std;

class Mammal
{
public:
    void Move() const { cout << "Mammal move one step\n"; }
    void Move(int distance) const
    {
        cout << "Mammal move ";
        cout << distance << "_steps.\n";
    }

protected:
    int itsAge;
    int itsWeight;
};

class Dog : public Mammal
{
public:
    // 함수를 숨기려 하면, 컴파일러가 경고를 표시할 수도 있다.
    void Move() { cout << "Dog move 5 steps.\n"; }
};

int main()
{
    Mammal bigAnimal;
    Dog fido;
    bigAnimal.Move();
    bigAnimal.Move(2);
    fido.Move();
    // fido.Move(10);       // 컴파일 오류 발생 : Move() 메서드를 재정의하지 않았으면 Move(int)를 호출할 수 있지만, 재정의를 했으므로 Dog에서 Move(int)를 재정의해야 한다.

    return 0;
}