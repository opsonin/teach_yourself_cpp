// 클래스 멤버 함수의 다중 정의
#include <iostream>
using namespace std;

typedef unsigned short int USHORT;
enum BOOL { FALSE, TRUE };

// Rectangle 클래스 선언
class Rectangle
{
public:
    // 생성자
    Rectangle(USHORT width, USHORT height);
    ~Rectangle(){}

    // 클래스 함수 DrawShape의 다중 정의
    void DrawShape() const;
    void DrawShape(USHORT aWidth, USHORT aHeight) const;
private:
    USHORT itsWidth;
    USHORT itsHeight;
};

// 생성자 구현
Rectangle::Rectangle(USHORT width, USHORT height)
{
    itsWidth = width;
    itsHeight = height;
}

// 다중 정의된 DrawShape - 매개 변수를 가지지 않는다.
// 현재 클래스 멤버값에 따라 그린다.
void Rectangle::DrawShape() const
{
    DrawShape(itsWidth, itsHeight);
}

// 다중 정의된 DrawShape - 두 개의 매개 변수를 가진다.
// 매개 변수에 따라 도형을 그린다.
void Rectangle::DrawShape(USHORT width, USHORT height) const
{
    for (USHORT i = 0; i < height; i++)
    {
        for (USHORT j = 0; j < width; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}

// 다중 정의된 함수를 볼 수 있는 드라이버 프로그램
int main()
{
    // 30, 5로 사각형 초기화
    Rectangle theRect(30,5);
    cout << "DrawShape(): \n";
    theRect.DrawShape();
    cout << "DrawShape(40,2): \n";
    theRect.DrawShape(40,2);

    return 0;
}