#include <ppltasks.h>
#include "iostream"
using namespace std;


uint64_t sol;
uint64_t s1;
uint64_t n1;
uint64_t n2;
uint64_t num = 1;

uint64_t recur (uint64_t n)
{
    n1 = n;
    if(n == 0 || n == 1)
    {
        sol = 1;
    }
    else
    {
        s1 = recur(n-1);
        sol = n*s1;
    }
    return sol;
}

uint64_t fibonacci (int f)
{
  n2 = f;
    uint64_t f1 = 0, f2 = 1, fib = 0;

    for (uint64_t i = 1; i < f; ++i)
    {
        if(i == 1)
        {
            cout << f1 << ", ";
            continue;
        }
        if(i == 2)
        {
            cout << f2 << ", ";
            continue;
        }
        fib = f1 + f2;
        f1 = f2;
        f2 = fib;

        cout << fib << ", " << endl;
    }
    return fib;
}

int main()
{
    cout << "Please enter the value of the factorial:";
    cin >> n1;
    cout << "Please enter length of Fibonacci sequence:";
    cin >> n2;
    cout << "Factorial is :"<<recur(n1)<< endl;
    cout << fibonacci(n2) << "\n";
    return 0;
}