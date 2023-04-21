// Greed is a dice game played with five six-sided dice. Your mission, should you choose to accept it, is to score a throw according to these rules. You will always be given an array with five six-sided dice values.

//  Three 1's => 1000 points
//  Three 6's =>  600 points
//  Three 5's =>  500 points
//  Three 4's =>  400 points
//  Three 3's =>  300 points
//  Three 2's =>  200 points
//  One   1   =>  100 points
//  One   5   =>   50 point

// A single die can only be counted once in each roll. For example, a given "5" can only count as part of a triplet (contributing to the 500 points) or as a single 50 points, but not both in the same roll.

// Example scoring

//  Throw       Score
//  ---------   ------------------
//  5 1 3 4 1   250:  50 (for the 5) + 2 * 100 (for the 1s)
//  1 1 1 3 1   1100: 1000 (for three 1s) + 100 (for the other 1)
//  2 4 4 5 4   450:  400 (for three 4s) + 50 (for the 5)

#include <stdio.h>

int score(const int dice[5]) {

	// copy
	int arr[5];
	for (int i = 0; i < 5; i++ ) {
		arr[i] = dice[i];
	}

	// sorting
	for (int i = 0; i < 5; i++ ) {
		for (int j = 0; j < 5; j++ ) {
			if (arr[j] > arr[i]) {
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	// for (int i = 0; i < 5; i++ ) {
	// 	printf("%d ", arr[i]);
	// }
	
	// count occurances
	int sum = 0;
	for (int i = 0; i < 5; i++ ) {
		int counter = 0;
		for (int j = 0; j < 5; j++ ) {
			if (i == 0 || arr[i - 1] != arr[i]) {
				if (arr[i] == arr[j]) {
					counter++;
				}
			}
		}
		// printf(" counter %d: %d\n", arr[i], counter);
		int three = 0;
		while (counter >= 3) {
			counter -= 3;
			three++;
		}

		if (arr[i] == 1) {
			sum += three * 1000;
			sum += 100 * counter;
		}
		else if (arr[i] == 5) {
			sum += three * 500;
			sum += 50 * counter;
		}
		else {
			// printf("three %d for %d\n", three, arr[i]);
			sum += three * arr[i] * 100;
		}
	}
	return sum;
}
