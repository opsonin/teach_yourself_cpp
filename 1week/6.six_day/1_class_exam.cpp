// 클래스의 선언과 그 클래스 형의 개체 정의를 불 수 있다.
#include <iostream>

class Cat
{
    public:
        int itsAge;
        int itsWeight;
};

int main() {
    /*  아래와 같이 클래스에 직접 할당을 하면 오류 발생        
        Cat.itsAge = 5;
    */

    // 아래와 같이 클래스 개체의 멤버 변수에 할당해야 함.
    Cat Frisky;
    Frisky.itsAge = 5;
    std::cout << "Frisky is a cat who is ";
    std::cout << Frisky.itsAge << " years old.\n";
    
    return 0;
}