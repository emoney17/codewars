//Move the first letter of each word to the end of it, then add "ay" to the end of the word. Leave punctuation marks untouched.
//Examples

//pigIt('Pig latin is cool'); // igPay atinlay siay oolcay
//pigIt('Hello world !');     // elloHay orldway !

#include <iostream>
#include <vector>

std::string pig_it(std::string str)
{
	std::vector<std::string> v;
	std::string temp;
	int size = str.length();
	for (int i = 0; i < size + 1; i++)
	{
		if (str[i] == ' ' || i == size)
		{
			v.push_back(temp);
			temp.clear();
		}
		else
		{
			temp.push_back(str[i]);
		}
	}
	for (auto i : v) std::cout << i << std::endl;

	int sizev = v.size();
	std::string ans;
	for (int i = 0; i < sizev; i++)
	{
		if (v[i] == "!" || v[i] == "." || v[i] == "?" || v[i] == ",")
			temp = v[i];
		else
		{
			temp = v[i].substr(1, v[i].length());
			temp.push_back(v[i][0]);
			temp.push_back('a');
			temp.push_back('y');
		}
		ans.append(temp);
		ans.push_back(' ');
	}
	ans.pop_back();
	// std::cout << ans << std::endl;
	return ans;
}
