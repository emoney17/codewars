// In mathematics, the factorial of integer n is written as n!. It is equal to the product of n and every integer preceding it. For example: 5! = 1 x 2 x 3 x 4 x 5 = 120

// Your mission is simple: write a function that takes an integer n and returns the value of n!.

// You are guaranteed an integer argument. For any values outside the non-negative range, return null, nil or None (return an empty string "" in C and C++). For non-negative numbers a full length number is expected for example, return 25! =  "15511210043330985984000000" as a string.

#include <iostream>
#include <vector>
#include <algorithm>

std::string factorial(int factorial)
{
	int carry = 0;
	std::string f;
	std::vector<int> res = {1};

	for (int i = 2; i <= factorial; i++) // 1! = 1
	{
		for (int j = 0; j < (int) res.size(); j++)
		{
			// std::cout << "fac: " << i << '\n';
			int product = res[j] * i + carry; // current res * the current factorial + any carry
			// std::cout << "res[j]: " << product << '\n';
			res[j] = product % 10; // res = last digit of prod
			carry = product / 10; // carry = first digit of prod
		}
		while (carry) // if there is a carry
		{
			res.push_back(carry % 10); // add to the end the next digits
			carry = carry / 10; // divide to get next digits
		}
		// std::cout << "res: "; for (auto x : res) std::cout << x << " "; std::cout << '\n';
	}
	std::reverse(res.begin(), res.end());
	for (auto x : res) f += (std::to_string(x));
	// std::cout << "f: " << f << '\n';

	return f;
}
