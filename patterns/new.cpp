#include<bits/stdc++.h>
using namespace std;

int main(){
        int arr[]= {2,4,6,7,6,1};
    	int maximum;
		for(int i=0; i<6;i++ ){
			maximum= max(arr[i],arr[i-1]);

		}
        cout<< maximum;
    return 0;
}