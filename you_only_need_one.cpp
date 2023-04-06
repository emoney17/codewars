// You will be given an array a and a value x. All you need to do is check whether the provided array contains the value.

// Array can contain numbers or strings. X can be either.

// Return true if the array contains the value, false if not.


#include <iostream>
#include <vector>
#include <string>

bool check(const std::vector<std::string>& seq, const std::string& elem) {
    int length = seq.size();
    bool x = false;
    for (int i=0; i < length; i++){
        if (seq[i] == elem)
            x = true;
    }
    return x;

}
