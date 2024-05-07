#include <bits/stdc++.h>
using namespace std; 
 
int main()  
{ 
    int n = 4;
    int space = 2 * (n - 1); 
    for (int i = 1; i <= n; i++)
    {    
        for (int j = 1; j <= i; j++)
        {
            cout << j;   
        }   
        for (int k = 0; k < space; k++)   
        { 
            cout << " ";    
        }    
        for (int l = i; l >= 1; l--)
        { 
            cout << l; 
        }  
 
        cout << "\n";
        space -= 2;
    }

    return 0;
}

/* ANOTHER APPROACH
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int i, j, k, l;
    for (i = 1; i < 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << j;
        }
        for (k = 0; k <= 8 - i - j; k++)
        {
            cout << "*";
        }
        for (l = i; l >= 1; l--)
        {
            cout << l;
        }

        cout << "\n";
    }

    return 0;
}
*/
