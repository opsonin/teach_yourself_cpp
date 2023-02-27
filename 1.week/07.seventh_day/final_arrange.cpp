#include <iostream>
using namespace std;

typedef unsigned short int USHORT;
typedef unsigned long int ULONG;
enum BOOL { FALSE, TRUE };
enum CHOICE { DrawRect = 1, GetArea, GetPerim, ChangeDimensions, Quit };

// Rectangle 클래스 선언
class Rectangle{
    public:
        // 생성자
        Rectangle(USHORT width, USHORT height);
        ~Rectangle();

        // accessor
        USHORT GetHeight() const { return itsHeight; }
        USHORT GetWidth() const { return itsWidth; }
        ULONG GetArea() const { return itsHeight * itsWidth; }
        ULONG GetPerim() const { return 2*itsHeight + 2*itsWidth; }
        void SetSize(USHORT newWidth, USHORT newHeight);

        // 기타 메서드
        void DrawShape() const;
    private:
        USHORT itsWidth;
        USHORT itsHeight;
};

// 클래스 메서드 구현
void Rectangle::SetSize(USHORT newWidth, USHORT newHeight)
{
    itsWidth = newWidth;
    itsHeight = newHeight;
}

Rectangle::Rectangle(USHORT width, USHORT height)
{
    itsWidth = width;
    itsHeight = height;
}

Rectangle::~Rectangle() {};

USHORT DoMenu();
void DoDrawRect(Rectangle);
void DoGetArea(Rectangle);
void DoGetPerim(Rectangle);

int main()
{
    // 사각형을 30, 5로 초기화
    Rectangle theRect(30, 5);

    USHORT choice = DrawRect;
    USHORT fQuit = FALSE;

    while (!fQuit)
    {
        choice = DoMenu();
        if (choice < DrawRect || choice > Quit)
        {
            cout << "\nInvalid Choice, please try again.\n\n";
            continue;
        }

        switch (choice)
        {
            case DrawRect:
                DoDrawRect(theRect);
                break;
            case GetArea:
                DoGetArea(theRect);
                break;
            case GetPerim:
                DoGetPerim(theRect);
                break;
            case ChangeDimensions:
                USHORT newLength, newWidth;
                cout << "\nNew width: ";
                cin >> newWidth;
                cout << "New height: ";
                cin >> newLength;
                theRect.SetSize(newWidth, newLength);
                DoDrawRect(theRect);
                break;
            case Quit:
                fQuit = TRUE;
                cout << "\nExiting...\n\n";
                break;
            default:
                cout << "Error in choice!\n";
                fQuit = TRUE;
                break;
        }   // switch 끝
    }   // while 끝    
}   // main 끝

USHORT DoMenu()
{
    USHORT choice;
    cout << "\n\n   *** Menu ***  \n";
    cout << " (1) Draw Rectangle\n";
    cout << " (2) Area\n";
    cout << " (3) Perimeter\n";
    cout << " (4) Resize\n";
    cout << " (5) Quit\n";
    cin >> choice;

    return choice;
}

void DoDrawRect(Rectangle theRect)
{
    USHORT height = theRect.GetHeight();
    USHORT width = theRect.GetWidth();

    for (USHORT i = 0; i < height; i++)
    {
        for (USHORT j = 0; j < width; j++)
            cout << "*";
        cout << "\n";
    }
}

void DoGetArea(Rectangle theRect)
{
    cout << "Ara: " << theRect.GetArea() << endl;
}

void DoGetPerim(Rectangle theRect)
{
    cout << "Perimeter: " << theRect.GetPerim() << endl;
}