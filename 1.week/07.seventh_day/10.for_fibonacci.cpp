#include <iostream>
using namespace std;

typedef unsigned long int ULONG;

ULONG fib(ULONG position);

int main()
{
    ULONG answer, position;
    cout << "Which position? ";
    cin >> position;
    cout << "\n";

    answer = fib(position);
    cout << answer << " is the ";
    cout << position << "th Fibonacci number.\n";

    return 0;
}

ULONG fib(ULONG n)
{
    ULONG minusTwo = 1, minusOne = 1, answer = 2;

    if (n < 3)
        return 1;

    for (n -= 3; n ; n--)
    {
        minusTwo = minusOne;
        minusOne = answer;
        answer = minusOne + minusTwo;        
    }

    return answer;
}