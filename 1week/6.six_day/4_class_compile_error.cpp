// 컴파일 오류를 볼 수 있다.
#include <iostream>
using namespace std;

class Cat
{
    public:
        Cat(int initialAge);
        ~Cat();
        int GetAge() const;     // const accessor 함수
        void SetAge(int age);
        void Meow();
    private:
        int itsAge;
};

// Cat의 생성자
Cat::Cat(int initialAge)
{
    itsAge = initialAge;
    cout << "Cat Constructor\n";
}

Cat::~Cat()
{
    cout << "Cat Destructor\n";
}

// GetAge, const 함수
// 일부러 const를 위반할 것이다.
int Cat::GetAge() const
{
    return (itsAge++);      // const 위반
}

// SetAge의 정의
// accessor 함수
void Cat::SetAge(int age)
{
    // 멤버 변수 itsAge를
    // 매개 변수 age로 전달된 값으로 설정
    itsAge = age;
}

// Meow 메서드의 정의
// 반환값 : void
// 매개 변수 : 없음
// 동작 : 화면에 "Meow"라는 단어를 출력
void Cat::Meow()
{
    cout << "Meow.\n";
}

// 인터페이스의 다양한 위반과 결과의 컴파일러 오류의 예를 볼 수 있다.
int main()
{
    Cat Frisky;             // 선언과 일치하지 않는다.
    Frisky.Meow();
    Frisky.Bark();          // 틀렸다, 고양이는 짖을 수 없다.
    Frisky.itsAge = 7;      // itsAge는 private이다.

    return 0;
}