// 인라인 함수와 헤더 파일을 포함시킨 사용예
#include "cat.hpp"
using namespace std;

Cat::Cat(int initialAge)        // 생성자
{
    itsAge = initialAge;
}

Cat::~Cat()     // 소멸자, 아무 동작도 하지 않는다.
{}

// Cat을 만들고, itsAge를 설정하고, Meow를 호출하고 itsAge를 출력한 다음에 다시 Meow를 호출한다.
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