#include <iostream>
using namespace std;

void headRecursion(int n)
{
    if (n == 0)
    {
        return;
    }
    headRecursion(n - 1);
    cout << n << " ";
}

void tailRecursion(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << n << " ";
    tailRecursion(n - 1);
}

int main()
{

    cout << "Tail Recursion" << endl;
    tailRecursion(5);
    cout<<endl;
    cout << "Head Recursion" << endl;
    headRecursion(5);
}