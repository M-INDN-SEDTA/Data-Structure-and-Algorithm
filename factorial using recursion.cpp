#include <bits/stdc++.h>
using namespace std;

 
int factorial(int n)
{
	// Stop condition
	if (n == 0 || n == 1)
		return 1;
	else
		return n * factorial(n - 1);
}

 
int main()
{
	int n = 5;
	cout<<"factorial of "<<n<<" is: "<<factorial(n);
	return 0;
}
