#include <bits/stdc++.h>
using namespace std;

int main() 
{ 
    int i, j, k;
    for (i = 1; i <= 5; i++)  
    {
        for (j = 1; j <= i - 1; j++)
        {
            cout << " "; 
        }
        for (k = 1; k <= 10 - 2 * i + 1; k++) // 2n-(2i+1)  formula !
        {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}