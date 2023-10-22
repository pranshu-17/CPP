  //Factorial
class Solution {
public: 
	long factorial(int fact) {
		// Your code goes here 
        if (fact <= 1) {
            return 1; 
        } 
        return fact * factorial(fact - 1); 
        	}    
};    
                       