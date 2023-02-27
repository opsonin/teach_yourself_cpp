// const 메서드로 포인터 사용하기
#include <iostream>
using namespace std;

class Rectangle
{
    public:
        Rectangle();
        ~Rectangle();
        void SetLength(int length) { itsLength = length; }
        int GetLength() const { return itsLength; }

        void SetWidth(int width) { itsWidth = width; }
        int GetWidth() const { return itsWidth; }
    private:
        int itsLength;
        int itsWidth;
};

Rectangle::Rectangle()
{
    itsLength = 5;
    itsWidth = 10;
}

Rectangle::~Rectangle() {}

int main()
{
    Rectangle *pRect = new Rectangle;
    const Rectangle *pConstRect = new Rectangle;
    Rectangle *const pConstPtr = new Rectangle;

    cout << "pRect width: " << pRect->GetWidth() << " feet.\n";
    cout << "pConstRect width: " << pConstRect->GetWidth() << " feet.\n";
    cout << "pConstPtr width: " << pConstPtr->GetWidth() << " feet.\n";

    pRect->SetWidth(20);
    // pConstRect->SetWidth(20);
    pConstPtr->SetWidth(20);

    cout << "pRect width: " << pRect->GetWidth() << " feet.\n";
    cout << "pConstRect width: " << pConstRect->GetWidth() << " feet.\n";
    cout << "pConstPtr width: " << pConstPtr->GetWidth() << " feet.\n";

    return 0;
}