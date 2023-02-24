// 생성자 다중 정의
#include <iostream>
using namespace std;

class Rectangle
{
public:
    Rectangle();
    Rectangle(int width, int length);
    ~Rectangle(){}
    
    int GetWidth() const { return itsWidth; }
    int GetHeight() const { return itsHeight; }
private:
    int itsWidth;
    int itsHeight;
};

Rectangle::Rectangle()
{
    itsWidth = 5;
    itsHeight = 10;
}
/* 위와 동일한 초기화 방식*/
/*
Rectangle::Rectangle():
    itsWidth(5), itsHeight(10)
    {};
*/ 

Rectangle::Rectangle(int width, int height)
{
    itsWidth = width;
    itsHeight = height;
}
/* 위와 동일한 초기화 방식*/
/*
Rectangle::Rectangle(int width, int height):
    itsWidth(width), itsHeight(height)
    {};
*/
int main()
{
    Rectangle Rect1;
    cout << "Rect1 width: " << Rect1.GetWidth() << endl;
    cout << "Rect1 height: " << Rect1.GetHeight() << endl;

    int aWidth, aHeight;
    cout << "\nEnter a width: ";    cin >> aWidth;
    cout << "Enter a height: ";   cin >> aHeight;

    Rectangle Rect2(aWidth, aHeight);
    cout << "\nRect2 width: " << Rect2.GetWidth() << endl;
    cout << "Rect2 height: " << Rect2.GetHeight() << endl;

    return 0;
}