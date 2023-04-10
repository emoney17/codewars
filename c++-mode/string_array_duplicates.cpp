// In this Kata, you will be given an array of strings and your task is to remove all consecutive duplicate letters from each string in the array.

// For example:

//     dup(["abracadabra","allottee","assessee"]) = ["abracadabra","alote","asese"].

//     dup(["kelless","keenness"]) = ["keles","kenes"].

#include <iostream>
#include <vector>

std::vector<std::string> dup(std::vector<std::string> arr)
{
	std::string tmp;
	for (int i = 0; i < (int) arr.size(); i++)
	{
		// std::cout << "Before: " << arr[i] << std::endl;
		for (int j = 0; j < (int) arr[i].length(); j++)
		{
			while (arr[i][j] == arr[i][j+1])
			{
				arr[i].erase(arr[i].begin()+j);
			}
		}
		// std::cout << "After: " << arr[i] << std::endl;
	}
	return arr;
}
