#include <iostream>
#include "calculateFunc.h"


int main() 
{
	double x = 0.0;
	double y = 0.0;
	double result = 0.0;
	char oper = '+';

	std::cout << "Simple console calculator" << std::endl;
	std::cout << "Please enter the operation to perform. Format: a+b | a-b | a*b | a/b" << std::endl;

	while (true) 
	{
		std::cin >> x >> oper >> y;
		if (oper == '/' && y == 0) 
		{
			std::cout << "Attempted to divide by zero!" << std::endl;
			continue;
		}
		else 
		{
			result = calculate(x, oper, y);
		}
		
		/*result = calculate(x, oper, y);*/
		std::cout << "Result: " << x << " " << oper << " " << y << " = " << result << std::endl;
	}


	return 0;
}