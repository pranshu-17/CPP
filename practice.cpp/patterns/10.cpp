#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n = 5;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int stars = i;
        if (i > n)
        {
            stars = 2 * n - i;
        }

        for (int j = 0; j < stars; j++)
        {
            cout << "~";
        }

        cout << "\n";
    }

    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int i, j, k, l;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }

    for (k = 0; k < 4; k++)
    {
        for (l = 0; l < 4 - k; l++)
        {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}
*/