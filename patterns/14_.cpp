#include <bits/stdc++.h>
using namespace std;

int main()
{

    for (int i = 1; i <= 5; i++)
    {
        for (char j = 'A'; j < 'A' + i; j++)
        {
            cout << j;
        }

        cout << "\n";
    }
    return 0;
}

/* A B C D E F G H I J K L M N O
#include <bits/stdc++.h>
using namespace std;

int main()
{

    char alphabet = 'A';
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << alphabet;
            alphabet += 1;
        }
        cout << "\n";
    }
}
*/