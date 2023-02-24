// 멤버 함수에서 기본값
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

    void DrawShape(USHORT aWidth, USHORT aHeight, BOOL UseCurrentVals = FALSE) const;
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

// 세번째 매개 변수에 사용하는 기본값
void Rectangle::DrawShape(USHORT width, USHORT height, BOOL UseCurrentValue) const
{
    int printWidth;
    int printHeight;
    cout << "DrawShape.BOOL value = " << UseCurrentValue << "\n";

    if (UseCurrentValue == TRUE)
    {
        printWidth = itsWidth;      // 현재 클래스 값 사용
        printHeight = itsHeight;
    }
    else
    {
        printWidth = width;         // 매개 변수값 사용
        printHeight = height;
    }

    for (int i = 0; i < printHeight; i++)
    {
        for (int j = 0; j < printWidth; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}

// 다중 정의된 함수를 볼 수 있는 드라이버 프로그램
int main()
{
    // 사각형을 30, 5로 초기화
    Rectangle theRect(30,5);

    cout << "DrawShape(0,0,TRUE)...\n";
    theRect.DrawShape(0,0,TRUE);
    cout << "DrawShape(40,2)...\n";
    theRect.DrawShape(40,2);

    return 0;
}