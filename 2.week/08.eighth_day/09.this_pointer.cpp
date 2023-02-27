// this 포인터 사용하기
#include <iostream>
using namespace std;

class Rectangle
{
    public:
        Rectangle();
        ~Rectangle();
        void SetLength(int length) { this->itsLength = length; }
        int GetLength() const { return this->itsLength; }

        void SetWidth(int width) { itsWidth = width; }
        int GetWeidth() const { return itsWidth; }
    private:
        int itsLength;
        int itsWidth;
};

Rectangle::Rectangle()
{
    itsWidth = 5;
    itsLength = 10;
}

Rectangle::~Rectangle() {}

int main()
{
    Rectangle theRect;
    cout << "theRec is " << theRect.GetLength() << " feet long.\n";
    cout << "theRec is " << theRect.GetWeidth() << " feet wide.\n";
    theRect.SetLength(20);
    theRect.SetWidth(10);
    cout << "theRec is " << theRect.GetLength() << " feet long.\n";
    cout << "theRec is " << theRect.GetWeidth() << " feet wide.\n";

    return 0;
}