// In this simple Kata your task is to create a function that turns a string into a Mexican Wave. You will be passed a string and you must return that string in an array where an uppercase letter is a person standing up. 

// Rules

//  1.  The input string will always be lower case but maybe empty.

//  2.  If the character in the string is whitespace then pass over it as if it was an empty seat

// Example

// wave("hello") => {"Hello", "hEllo", "heLlo", "helLo", "hellO"}

#include <iostream>
#include <vector>

std::vector<std::string> wave(std::string y){
	std::vector<std::string> v;
	std::string edit;
	for(auto i = 0; i < (int) y.length(); i++){
		edit = y;//make equal
		if(edit[i] != ' '){
			edit[i] = toupper(edit[i]);//make ith character upper case
			v.push_back(edit);
		}
	}
	/* for (auto i:v) std::cout << i << ' '; */
	return v;
}
