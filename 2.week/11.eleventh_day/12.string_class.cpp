// ISO C++ forbids converting a string constant to 'char*' 컴파일 오류 발생
#include <iostream>
#include <string.h>
using namespace std;

// 기본적인 문자열 클래스
class String
{
    public:
        String();
        String(const char *const);
        String(const String &);
        ~String();

        // 다중 정의 연산자
        char & operator[](unsigned short offset);
        char operator[](unsigned short offset) const;
        String operator+(const String&);
        void operator+=(const String&);
        String & operator= (const String &);

        // 일반 accessor
        unsigned short GetLen() const { return itsLen; }
        const char * GetString() const { return itsString; }
    private:
        String (unsigned short);
        char * itsString;
        unsigned short itsLen;
};

// 기본 생성자는 0바이트의 문자열을 만든다.
String::String()
{
    itsString = new char[1];
    itsString[0] = '\0';    // 널 문자
    itsLen = 0;
}

// helper 생성자는 필요한 크기의 세 문자열을 만드는 클래스 메서드에서 사용한다.
// 널 문자로 채워진다.
String::String(unsigned short len)
{
    itsString = new char[len+1];
    for (unsigned short i = 0; i <= len; i++)
        itsString[i] = '\0';
    itsLen = len;
}

// 문자 배열을 문자열로 반환한다.
String::String (const char * const cString)
{
    itsLen = strlen(cString);
    itsString = new char[itsLen+1];
    for (unsigned short i = 0; i<itsLen; i++)
        itsString[i] = cString[i];
    itsString[itsLen] = '\0';
}

// 복사 생성자
String::String (const String & rhs)
{
    itsLen = rhs.GetLen();
    itsString = new char[itsLen+1];
    for (unsigned short i = 0; i < itsLen; i++)
        itsString[i] = rhs[i];
    itsString[itsLen] = '\0';
}

// 소멸자, 할당된 메모리를 해제한다.
String::~String()
{
    delete [] itsString;
    itsLen = 0;
}

// operator=, 현재 메모리를 해제하고 문자열과 크기를 복사한다.
String& String::operator=(const String & rhs)
{
    if (this == &rhs)
        return *this;
    delete [] itsString;
    itsLen = rhs.GetLen();
    itsString = new char[itsLen+1];
    for (unsigned short i = 0; i < itsLen; i++)
        itsString[i] = rhs[i];
    itsString[itsLen] = '\0';
    return *this;
}

// 상수가 아닌 오프셋 연산자,
// 문자에 대한 참조를 반환하여 변경될 수 있도록 한다.
char & String::operator[](unsigned short offset)
{
    if (offset > itsLen)
        return itsString[itsLen -1];
    else
        return itsString[offset];
}

// 상수 오프셋 연산자는 상수 개체에 해애 사용된다(복사 생성자 참조)
char String::operator[](unsigned short offset) const
{
    if (offset > itsLen)
        return itsString[itsLen-1];
    else
        return itsString[offset];
}

// 현재 문자열을 rhs에 추가하여 새 문자열을 만든다.
String String::operator+(const String& rhs)
{
    unsigned short totalLen = itsLen + rhs.GetLen();
    String temp(totalLen);
    for (unsigned short i = 0; i < itsLen; i++)
        temp[i] = itsString[i];
    for (unsigned short j = 0, i = 0; j < rhs.GetLen(); j++, i++)
        temp[i] = rhs[j];
    temp[totalLen] = '\0';
    return temp;
}

// 현재 문자열을 수정하고 아무것도 반환하지 않는다.
void String::operator+=(const String & rhs)
{
    unsigned short rhsLen = rhs.GetLen();
    unsigned short totalLen = itsLen + rhsLen;
    String temp(totalLen);
    for (unsigned short i = 0; i < itsLen; i++)
        temp[i] = itsString[i];
    for (unsigned short j = 0, i = 0; j < rhs.GetLen(); j++, i++)
        temp[i] = rhs[i - itsLen];
    temp[totalLen] = '\0';
    *this = temp;
}

int main()
{
    String s1("Initial test");
    cout << "S1:\t" << s1.GetString() << endl;

    char *temp = "Hello World";
    s1 = temp;
    cout << "S1:\t" << s1.GetString() << endl;

    char tempTwo[20];
    strcpy(tempTwo, "; nice to be here!");
    s1 += tempTwo;
    cout << "tempTwo:\t" << tempTwo << endl;
    cout << "S1:\t" << s1.GetString() << endl;

    cout << "S1[4]:\t" << s1[4] << endl;
    s1[4] = 'x';
    cout << "S1:\t" << s1.GetString() << endl;

    cout << "S1[999]:\t" << s1[999] << endl;

    String s2(" Another string");
    String s3;
    s3 = s1 + s2;
    cout << "S3:\t" << s3.GetString() << endl;

    String s4;
    s4 = "Why does this work?";
    cout << "S4:\t" << s4.GetString() << endl;

    return 0;
}