#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return factorial(n - 1) * n;
}

void reverseArray(int arr[], int start, int end)
{
    if (start >= end)
        return;
    swap(arr[start], arr[end]);
    // cout << arr[start] << " " << arr[end] << endl;
    reverseArray(arr, start + 1, end - 1);
}

bool isPalindrome(string s, int start, int end)
{
    if (start >= end)
        return true;
    if (s[start] != s[end])
    {
        return false;
    }
    return isPalindrome(s, start + 1, end - 1);
}

int fibonacci(int N)
{
    if (N <= 1)
    {
        return N;
    }
    int last = fibonacci(N - 1);
    int slast = fibonacci(N - 2);
    return last + slast;
}

int main()
{
    // int arr[4] = {1, 2, 3, 4};
    // reverseArray(arr, 0, 3);

    // string s = "nitin";
    // cout << isPalindrome(s, 0, 4) << endl;
    // for (int i = 0; i < 4; i++)
    // {
    //     cout << s[i] << endl;
    // }
    cout << fibonacci(0);
}