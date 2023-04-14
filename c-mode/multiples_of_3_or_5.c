// f we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

// Finish the solution so that it returns the sum of all the multiples of 3 or 5 below the number passed in. Additionally, if the number is negative, return 0 (for languages that do have them).

// Note: If the number is a multiple of both 3 and 5, only count it once.

#include <stdio.h>

int solution(int number) {
	int sum = 0;
	for (int i = 1; i < number; i++) {
		// printf("%d\n",i);
		int c = 0;
		if (i%5 == 0) {
			// printf("i: %d is divisible by 5\n", i);
			c++;
		}
		else if (i%3 == 0) {
			// printf("i: %d is divisible by 3\n", i);
			c++;
		}
		if (c > 0) {
			sum+=i;
		}
	}
	// printf("%d", sum);
	return sum;
}
