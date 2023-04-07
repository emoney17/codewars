// Given the string representations of two integers, return the string representation of the sum of those integers.

// For example:

// sumStrings('1','2') // => '3'

// A string representation of an integer will contain no characters besides the ten numerals "0" to "9".

// #include <iostream>
// #include <cmath>

// std::string sum_strings(const std::string & a, const std::string & b)
// {
// 	unsigned long element;

// 	unsigned long total = 0;
// 	int asize = a.length();
// 	unsigned long acounter = pow(10, asize - 1);
// 	element = 0;
// 	for (int i = 0; i < asize; i++)
// 	{
// 		element += ((int) a[i]) - 48;
// 		element *= acounter; 
// 		total += element;
// 		element = 0;
// 		acounter /= 10;
// 	}

// 	int bsize = b.length();
// 	unsigned long bcounter = pow(10, bsize - 1);
// 	element = 0;
// 	for (int i = 0; i < bsize; i++)
// 	{
// 		element += ((int) b[i]) - 48;
// 		element *= bcounter; 
// 		total += element;
// 		element = 0;
// 		bcounter /= 10;
// 	}
// 	return std::to_string(total);
// }


int main(int argc, char * argv[])
{

	std::cout << sum_strings("1908874359", "1908874359") << '\n';
	return 0;
}
