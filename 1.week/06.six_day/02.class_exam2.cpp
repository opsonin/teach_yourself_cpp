// Cat 클래스 선언
// 데이터 멤버는 private 이고 public accessor 메서드는
// private 데이터의 읽기와 쓰기 동작을 행한다.
#include <iostream>
using namespace std;

class Cat
{
    public:
        // public accessor
        int GetAge();
        void SetAge(int age);

        int GetWeight();
        void SetWeight(int weight);

        // public 멤버 함수
        void Meow();

    // private 멤버 데이터
    private:
        int itsAge;
        int itsWeight;
};

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
    Cat Frisky;
    Frisky.SetAge(5);
    Frisky.Meow();

    cout << "Frisky is a cat who is ";
    cout << Frisky.GetAge() << " years old.\n";

    Frisky.Meow();

    return 0;
}