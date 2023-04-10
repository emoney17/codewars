// Write a function that takes in a string of one or more words, and returns the same string, but with all five or more letter words reversed (Just like the name of this Kata). Strings passed in will consist of only letters and spaces. Spaces will be included only when more than one word is present.

// Examples:

// spinWords( "Hey fellow warriors" ) => returns "Hey wollef sroirraw" 
// spinWords( "This is a test") => returns "This is a test" 
// spinWords( "This is another test" )=> returns "This is rehtona test"

#include <iostream>
#include <sstream>
#include <algorithm>

std::string spinWords(const std::string &str)
{
	std::string t, reverse;
	std::stringstream x(str);	
	
	while (std::getline(x,t,' '))
	{
		if (t.length() > 4){
			std::cout << "This needs to be reversed " << t << '\n';
			std::reverse(t.begin(), t.end());
			reverse += t + ' ';
		}
		else {
			reverse += t + ' ';
		}

	}
	reverse.pop_back();
	return reverse;

}// spinWords
