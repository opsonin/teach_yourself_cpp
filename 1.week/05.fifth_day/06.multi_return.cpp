// 다중 return 문을 사용하는 예
#include <iostream>
using namespace std;

int Doubler(int AmountToDouble);

int main()
{
    int result = 0;
    int input;

    cout << "Enter a number between 0 and 10,000 to double: ";
    cin >> input;

    cout << "\nBefore doubler is called...";
    cout << "\ninput: " << input << " doubled: " << result << "\n";

    result = Doubler(input);

    cout << "\nBack from Doubler...\n";
    cout << "\ninput: " << input << " double: " << result << "\n";

    return 0;
}

int Doubler(int original)
{
    if (original <= 10000)
        return original * 2;
    else
        return -1;
    
    cout << "You can't get here!\n";
}