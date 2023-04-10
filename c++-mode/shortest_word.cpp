// Simple, given a string of words, return the length of the shortest word(s).

// String will never be empty and you do not need to account for different data types.

#include <string>
#include <vector>
#include <sstream>

using std::string;
using std::vector;
int find_short(std::string str)
{
    string word;
    vector<int> list;
    std::stringstream ss(str);
    while (ss >> word)
        list.push_back(word.length());

    int min = list[0];

    // for (auto i:list) cout << i << '\n';
    for(auto i=0; i < list.size(); i++)
        if (list[i] < min)
            min = list[i];
    // for (auto i:list) cout << i;
    return min;
  
}
