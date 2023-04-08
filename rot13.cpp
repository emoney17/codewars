// For this task you're only supposed to substitute characters. Not spaces, punctuation, numbers, etc.

// Test examples:

// "EBG13 rknzcyr." -> "ROT13 example."

// "This is my first ROT13 excercise!" -> "Guvf vf zl svefg EBG13 rkprepvfr!"

#include <iostream>

// each subtitute should have a difference of 13 eg {0 = 15 - b = 2 = 13}
std::string rot13(const std::string & str)
{
	char temp;
	std::string ans;
	for (int i = 0; i < (int) str.length(); i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if ((str[i] + 13) > 'Z')
				temp = str[i] - 13;
			else
				temp = str[i] + 13;
			// std::cout << temp << '\n';
			ans += temp;
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			if ((str[i] + 13) > 'z')
				temp = str[i] - 13;
			else
				temp = str[i] + 13;
			std::cout << temp << '\n';
			ans += temp;
		}
		else
		{
			// std::cout << str[i] << '\n';
			ans += str[i];
		}
	}
	std::cout << ans << '\n';
	return ans;
}
