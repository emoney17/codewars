// Given a random non-negative number, you have to return the digits of this number within an array in reverse order.
// Example(Input => Output):

// 35231 => [1,3,2,5,3]
// 0 => [0]

#include <iostream>
#include <vector>

std::vector<int> digitize(unsigned long n)
{
    int num;
    std::vector<int> total;
    if (n == 0) total.push_back(0);
    else {
		for (auto i=0; n>0; i++)
		{
			num = n % 10;
			n = n / 10;
			total.push_back(num);
		}
    }
    for (auto j:total) std::cout << j;
    return total;
}
