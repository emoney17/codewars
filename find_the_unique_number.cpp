// There is an array with some numbers. All numbers are equal except for one. Try to find it!

// find_uniq(std::vector<float>{1, 1, 1, 2, 1, 1});  // --> 2
// find_uniq(std::vector<float>{0, 0, 0.55, 0, 0});  // --> 0.55

// It’s guaranteed that array contains at least 3 numbers.

// The tests contain some very huge arrays, so think about performance.

#include <vector>

float find_uniq(const std::vector<float> &v)
{
	/* for(auto i:v) std::cout << i << '\n'; */
	if(v[1] != v[2] && v[1] != v[3])
		/* std::cout << "Element number v[1] is unique\n"; */
		return v[1];
	else{
		for(auto i=0; i < (int) v.size(); i++){
			if(v[i] != v[1])
				/* std::cout << "Element number " << v[i] << " is unique\n"; */
				return v[i];
		}
	}
	return 0;
}
