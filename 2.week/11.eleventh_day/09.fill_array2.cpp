#include <iostream>
using namespace std;

int main()
{
    char buffer[80];
    cout << "enter the string: ";
    cin.get(buffer, 79);    // 79개의 문자 또는 newline까지 입력 받는다.
    cout << "Here's the buffer: " << buffer << endl;

    return 0;
}