#include <bits/stdc++.h>
using namespace std;

int main()
{

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 0; j < i; j++)   
        {
            int digit; 
            if ((i + j) % 2 != 0)  
            {  
                digit = 1;
            } 
            else
                digit = 0; 
            cout << digit; 
        } 
        cout << "\n";  
    }

    return 0;
}