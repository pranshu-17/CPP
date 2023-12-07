#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num, digit;
    int rev = 0;
    cin >> num;
    while (num != 0)
    {
        digit = num % 10;
        rev = rev * 10 + digit;
        num /= 10; 
    }
    cout << rev;

    return 0;
}