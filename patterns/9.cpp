#include <bits/stdc++.h>
using namespace std;

int main()   
{    
  
    for (int i = 1; i <= 5; i++)    
    {       
        for (int j = 1; j <= 5 - i; j++)    
        {     
            cout << " ";   
        }    
        for (int k = 1; k <= 2 * i - 1; k++)  
        {    
            cout << "*";    
        }       
  
        cout << "\n";  
    }    
    int i, j, k; s  
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