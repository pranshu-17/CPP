#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n = 5;
    int num = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << num << " ";
            num = num + 1;
        }
        cout << "\n";
    }

    return 0;
}