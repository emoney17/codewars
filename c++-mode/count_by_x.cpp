// Create a function with two arguments that will return an array of the first n multiples of x.

// Assume both the given number and the number of times to count will be positive numbers greater than 0.

// Return the results as an array or list ( depending on language ).
// Examples

// countBy(1,10)  should return  {1,2,3,4,5,6,7,8,9,10}
// countBy(2,5)  should return {2,4,6,8,10}


#include <vector>
using std::vector;
std::vector<int> countBy(int x,int n){
      vector<int> arr;
    for (int i=0; i < n; i++){
//push back to add element to a vector
        arr.push_back(x * (i + 1));
        // cout << arr[i] << '\n';
    }
    return arr;
}
