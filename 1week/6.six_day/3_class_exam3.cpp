// Cat 클래스에 대한 생성자와 소멸자의 선언을 볼 수 있는 예
#include <iostream>
using namespace std;

class Cat
{
    public:                         // public 영역 시작
        Cat(int initialAge);        // 생성자
        ~Cat();                     // 소멸자
        int GetAge();               // accessor 함수
        void SetAge(int age);       // accessor 함수
        void Meow();

    private:                // private 영역 시작
        int itsAge;         // 멤버 변수
};

// Cat의 생성자
Cat::Cat(int initialAge)
{
    itsAge = initialAge;
}

Cat::~Cat()     // 소멸자, 아무 동작도 하지 않음
{    
}

// GetAge, public accesor 함수는 itsAge 멤버의 값을 반환한다.
int Cat::GetAge()
{
    return itsAge;
}

// SetAge의 정의,
// accessor 함수는 itsAge 멤버의 값을 반환한다.
void Cat::SetAge(int age)
{
    // 멤버 변수 itsAge를
    // 매개 변수 age에 의해 전달된 값으로 설정
    itsAge = age;
}

// Mew 메서드의 정의
// 반환 값 : void
// 매개변수 : 없음
// 동작 : "Meow"를 화면에 출력한다.
void Cat::Meow()
{
    cout << "Meow.\n";
}

// cat을 만들고 itsAge를 설정하고 Meow를 실행한다.
// 화면에 itsAge를 출력하고, 다시 한 번 Meow를 실행한다.
int main()
{
    Cat Frisky(5);

    Frisky.Meow();
    cout << "Frisky is a cat who is ";
    cout << Frisky.GetAge() << " years old.\n";
    Frisky.Meow();

    Frisky.SetAge(7);
    cout << "Now Frisky is ";
    cout << Frisky.GetAge() << " years old.\n";

    return 0;
}