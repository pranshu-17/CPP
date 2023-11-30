#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,digit;
    cin>>n;

    // To find sum of digits of n
    int sum=0;
    while (n>0)
    {
        digit=n%10;
        sum += digit;
        n/=10;
    }
    cout<<sum;    

    return 0;
}