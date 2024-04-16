#include <iostream> 
using namespace std; 
int factorial(int n) 
{ 
	
	// Base case: if n is 0 or 1, return 1 
	if (n == 0 || n == 1) { 
		return 1; 
	} 

	// Recursive case: if n is greater than 1, 
// call the function with n-1 and multiply by n 
	else { 
		return n * factorial(n - 1); 
	} 
} 

int main() 
{ 
	
	// Call the factorial function and print the result 
	int result = factorial(5); 
	cout << result <<endl; // Output: 120 
	return 0; 
} 
