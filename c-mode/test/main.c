// My friend John and I are members of the "Fat to Fit Club (FFC)". John is worried because each month a list with the weights of members is published and each month he is the last on the list which means he is the heaviest.

// I am the one who establishes the list so I told him: "Don't worry any more, I will modify the order of the list". It was decided to attribute a "weight" to numbers. The weight of a number will be from now on the sum of its digits.

// For example 99 will have "weight" 18, 100 will have "weight" 1 so in the list 100 will come before 99.

// Given a string with the weights of FFC members in normal order can you give this string ordered by "weights" of these numbers?
// Example:

// "56 65 74 100 99 68 86 180 90" ordered by numbers weights becomes: 

// "100 180 90 56 65 74 68 86 99"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// weight is the sum of the digits
char * orderWeight(const char * s)
{
	int size = strlen(s);
	int temp = 0;
	int * weight = malloc(sizeof(int));
	int * num = malloc(sizeof(int));
	int w = 0;
	for (int i = 0; i < size; i++)
	{
		if (s[i] != ' ')
		{
			// calc weights
			int x = (int) s[i] - '0';
			temp += x;
		}
		else
		{
			// printf("temp: %d\n", temp);
			weight[w] = temp;
			w++;
			temp = 0;
		}
	}

	char * str = malloc(sizeof(char));
	int ss = 0;
	for (int i = 0; i < size; i++)
	{
		if (s[i] != ' ')
		{
			// printf("%c ", s[i]);
			str[ss] = s[i];
			ss++;
		}
	}
	for (int i = 0; i < ss; i++)
		printf("%d ", str[i]);
	// print weights
	// for (int i = 0; i < w; i++)
		// printf("%d ", weight[i]);
	return NULL;
}

int main()
{
	orderWeight("56 65 74 100 99 68 86 180 90");
	return 0;
}
