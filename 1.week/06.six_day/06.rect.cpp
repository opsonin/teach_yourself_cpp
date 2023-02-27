// rect.cpp의 시작
#include "rect.hpp"
Rectangle::Rectangle(int top, int left, int bottom, int right)
{
    itsTop = top;
    itsLeft = left;
    itsBottom = bottom;
    itsRight = right;

    itsUpperLeft.SetX(left);
    itsUpperLeft.SetY(top);

    itsUpperRight.SetX(right);
    itsUpperRight.SetY(top);

    itsLowerLeft.SetX(left);
    itsLowerLeft.SetY(bottom);

    itsLowerRight.SetX(right);
    itsLowerRight.SetY(bottom);
}

// 모서리를 찾아서 사각형의 면적을 계산한다.
// 너비와 높이를 찾아내고 곱한다.
int Rectangle::GetArea() const
{
    int Width = itsRight - itsLeft;
    int Height = itsTop - itsBottom;
    return (Width * Height);
}

int main()
{
    // 지역 사각형 변수를 초기화한다.
    Rectangle MyRectangle(100, 20, 50, 80);

    int Area = MyRectangle.GetArea();

    cout << "Area: " << Area << endl;
    cout << "Upper Left X Cordinate: ";
    cout << MyRectangle.GetUpperLeft().GetX() << endl;
    cout << "Lower Left Y Cordinate: ";
    cout << MyRectangle.GetUpperLeft().GetY() << endl;
    cout << "Upper Right X Cordinate: ";
    cout << MyRectangle.GetUpperRight().GetX() << endl;
    cout << "Lower Right Y Cordinate: ";
    cout << MyRectangle.GetLowerRight().GetY() << endl;

    return 0;
}