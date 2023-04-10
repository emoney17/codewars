// Write an algorithm that takes an array and moves all of the zeros to the end, preserving the order of the other elements.

// move_zeros({1, 0, 1, 2, 0, 1, 3}) // returns {1, 1, 2, 1, 3, 0, 0}

#include <iostream>
#include <vector>

std::vector<int> move_zeroes(const  std::vector<int> & input)
{
	std::vector<int> move;
	for ( auto i : input ) move.push_back(i);
	int counter = move.size() - 1;

	// std::cout << "BEFORE\n";
	// for(auto i : move) std::cout << i << ' '; std::cout << '\n';
	while (counter >= 0)
	{
		if (move[counter] == 0)
		{
			move.erase(move.begin()+counter);
			move.push_back(0);
		}
		counter--;
	}
	// std::cout << "AFTER\n";
	// for(auto i : move) std::cout << i << ' '; std::cout << '\n';
	return move;
}
