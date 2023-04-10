// Consider a sequence u where u is defined as follows:

//     The number u(0) = 1 is the first one in u.
//     For each x in u, then y = 2 * x + 1 and z = 3 * x + 1 must be in u too.
//     There are no other numbers in u.

// Ex: u = [1, 3, 4, 7, 9, 10, 13, 15, 19, 21, 22, 27, ...]

// 1 gives 3 and 4, then 3 gives 7 and 10, 4 gives 9 and 13, then 7 gives 15 and 22 and so on...
// Task:

// Given parameter n the function dbl_linear (or dblLinear...) returns the element u(n) of the ordered (with <) sequence u (so, there are no duplicates).
// Example:

// dbl_linear(10) should return 22

#include <iostream>
#include <vector>
#include <algorithm>

int dblLinear(int n)
{
	int i = 0, j = 0;
	std::vector<int> l = {1};
	while (l.size() <= n) {
		// std::cout << l[i] << '\n';
		// std::cout << l[i] << " gives " << 2 * l[i] + 1 << '\n';
		// std::cout << l[i] << " gives " << 3 * l[i] + 1 << '\n';
		int a = 2 * l[i] + 1;
		int b = 3 * l[j] + 1;
		if (a < b) {
			l.push_back(a);
			i++;
		}
		else if (b < a) {
			l.push_back(b);
			j++;
		}
		else {
			l.push_back(a);
			i++;
			j++;
		}
		// l.push_back(std::min(a, b));
		// l.push_back(std::max(a, b));

		// std::sort(l.begin(), l.end());
		// l.erase(std::unique(l.begin(), l.end()), l.end());
	}
	// for (auto x : l) std::cout << x << ' '; std::cout << '\n';
	return l[l.size() - 1];
}
