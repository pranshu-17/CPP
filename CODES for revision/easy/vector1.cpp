/* Increment and Decrement

You must be familiar with various types of operators. 
One of the most commonly used operators in other languages is increment and decrement operators.
Given two numbers X and Y.
Your task is to print the value of X decremented by 1 and value of Y after incrementing it by 1.

Example 1:

Input: X = 4, Y = 5 
Output: [3,6]
 */
class Solution {
public:
	vector<int> XandY(int X, int Y) {
		
		return{--X,++Y};
	}
};