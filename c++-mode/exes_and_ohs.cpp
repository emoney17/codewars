// Check to see if a string has the same amount of 'x's and 'o's. The method must return a boolean and be case insensitive. The string can contain any char.

// Examples input/output:

// XO("ooxx") => true
// XO("xooxx") => false
// XO("ooxXm") => true
// XO("zpzpzpp") => true // when no 'x' and 'o' is present should return true
// XO("zzoo") => false

#include <iostream>

bool XO(const std::string& str)
{
    int x_count = 0;
    int o_count = 0;
    for(auto i=0; i < (int) str.length(); i++){
        if (str[i] == 'x'|| str[i] == 'X')
            x_count++;
        else if (str[i] == 'o'|| str[i] == 'O')
            o_count++;
    }
    if (x_count == o_count)
        return true;
    else if (x_count == 0 && o_count == 0)
        return true;
    else
        return false;

}
