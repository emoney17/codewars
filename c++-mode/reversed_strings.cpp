// Complete the solution so that it reverses the string passed into it.

// 'world'  =>  'dlrow'
// 'word'   =>  'drow'



#include <string>
using namespace std ; 

string reverseString (string str )
{
    int length = str.length();
    int i {0};
    int n {length-1};
    while (i < n){
        swap(str[i], str[n]);
        i++;
        n--;
    }
  return str;
}
