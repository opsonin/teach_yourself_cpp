// Rect.hpp 시작
// 클래스 선언
#include <iostream>
using namespace std;

class Point
{
    // 생성자가 없고 기본값 사용
    public:
        void SetX(int x) { itsX = x; }
        void SetY(int y) { itsY = y; }
        int GetX() const { return itsX; }
        int GetY() const { return itsY; }
    private:
        int itsX;
        int itsY;
};  // Point 클래스 선언의 끝.

class Rectangle
{
    public:
        Rectangle (int top, int left, int bottom, int right);
        ~Rectangle() {};

        int GetTop() const { return itsTop; }
        int GetLeft() const { return itsLeft; }
        int GetBottom() const { return itsBottom; }
        int GetRight() const { return itsRight; }

        Point GetUpperLeft() const { return itsUpperLeft; }
        Point GetLowerLeft() const { return itsLowerLeft; }
        Point GetUpperRight() const { return itsUpperRight; }
        Point GetLowerRight() const { return itsLowerRight; }

        void SetUpperLeft(Point Location) { itsUpperLeft = Location; }
        void SetLowerLeft(Point Location) { itsLowerLeft = Location; }
        void SetUpperRight(Point Location) { itsUpperRight = Location; }
        void SetLowerRight(Point Location) { itsLowerRight = Location; }

        void SetTop(int top) { itsTop = top; }
        void SetLeft(int left) { itsLeft = left; }
        void SetBottom(int bottom) { itsBottom = bottom; }
        void SetRight(int right) { itsRight = right; }

        int GetArea() const;

    private:
        Point itsUpperLeft;
        Point itsLowerLeft;
        Point itsUpperRight;
        Point itsLowerRight;
        int itsTop;
        int itsLeft;
        int itsBottom;
        int itsRight;
};      // Rectangle의 끝