/* Your task is to make a function that can take any non-negative integer as an argument and return it with its digits in descending order. Essentially, rearrange the digits to create the highest possible number. */
/* Examples: */

/* Input: 42145 Output: 54421 */

/* Input: 145263 Output: 654321 */

/* Input: 123456789 Output: 987654321 */

#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
#include <math.h>

uint64_t * arr;
uint64_t descendingOrder(uint64_t n)
{
	int size = 1;
	int c = 0;
	int temp;
	/* calloc sets all other values to 0 while malloc does not */
	arr = calloc(size, sizeof(uint64_t)); /* allocate mem for dynamic arr */
	while (n > 0) {
		/* increase size while there is still n and reallocate memory*/
		size ++;
		arr = realloc(arr, size * sizeof(uint64_t));

		arr[c] = n % 10;
		n /= 10;
		c++;
	}
	for (int i = 0; i < size - 1; i++) {
		for (int j = i; j < size - 1; j++)
		{
			if (arr[i] < arr[j]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
		/* printf("%d\n", arr[i]); */
	}

	uint64_t num = 0;
	for (int i = 0; i < size - 1; i++) {
		num = 10 * num + arr[i];
	}
	free(arr);
	printf("%lu", num);
	return num;
}
