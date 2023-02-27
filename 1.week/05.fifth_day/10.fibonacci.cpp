// 피보나치가 발견한 재귀 호출의 사용예
// n번째 피보나치 수를 찾아보라.
// 다음 알고리즘을 사용하라: Fib(n) = fib(n-1) + fib(n-2)
// 중단 조건: n == 2 || n == 1
#include <iostream>
using namespace std;

int fib(int n);

int main()
{
    int n, answer;
    cout << "Enter number to find: ";
    cin >> n;
    cout << "\n\n";

    answer = fib(n);

    cout << answer << " is the " << n << "th Fibonacci number\n";

    return 0;
}

int fib(int n)
{
    cout << "Processing fib(" << n << ")...";

    if (n < 3)
    {
        cout << "Return 1!\n";
        return (1);
    }
    else
    {
        cout << "Call fib(" << n-2 << ") and fib(" << n-1 << ").\n";
        return (fib(n-2) + fib(n-1));
    }
}