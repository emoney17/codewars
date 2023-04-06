// A Narcissistic Number (or Armstrong Number) is a positive number which is the sum of its own digits, each raised to the power of the number of digits in a given base. In this Kata, we will restrict ourselves to decimal (base 10).

// For example, take 153 (3 digits), which is narcissistic:

//     1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153

// and 1652 (4 digits), which isn't:

//     1^4 + 6^4 + 5^4 + 2^4 = 1 + 1296 + 625 + 16 = 1938

// The Challenge:

// Your code must return true or false (not 'true' and 'false') depending upon whether the given number is a Narcissistic number in base 10. 

#include <cmath>
bool narcissistic( int value ){
  //Code away
    int digits {0};
    int val1 {value};
    int val2 {value};
    int sum {0};
    int num;
    while (val1 != 0){ //get the number of digits
        val1 = val1 / 10;
        digits++;
    }

    for (auto i = 0; i <= digits+1; i++){ //get the value of each digit to the power of num of digits then add
        num = val2 % 10;
        val2 = val2 / 10;
        sum += pow(num, digits);
    }
    if (sum == value)
        return true;
    else
        return false;
}
