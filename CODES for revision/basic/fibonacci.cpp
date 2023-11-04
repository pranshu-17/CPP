//fibonacci-> Write a Program to Generate Fibonacci Numbers. 
//The number is said to be in a Fibonacci series if each subsequent number is the sum of the previous two numbers.

class Solution {  
public:
	vector<int> fibonacci(int n) {
		vector<int> fibonacci(n);
        int first = 0, second = 1, next;
        for (int i = 0; i < n; i++) {
            if (i <= 1)
            {   
            next = i; 
            } else {
                next = first + second;
                first = second;
                second = next; 

 
            }  
            fibonacci[i] = next;
        } 
        return fibonacci;
	}
};