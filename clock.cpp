// Clock shows h hours, m minutes and s seconds after midnight.

// Your task is to write a function which returns the time since midnight in milliseconds.
// Example:

// h = 0
// m = 1
// s = 1

// result = 61000



int past(int h, int m, int s) {
  // your code here
    int total {0};
    total += h * 3600000;
    total += m * 60000;
    total += s * 1000;
    return total;

}
