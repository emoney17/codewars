// Complete the solution so that the function will break up camel casing, using a space between words.
// Example

// "camelCasing"  =>  "camel Casing"
// "identifier"   =>  "identifier"
// ""             =>  ""

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char * solution(const char * text){
	int i = 0;
	int j = 0;
	int size = strlen(text);
	char * sol = malloc(size * 2 * sizeof(char));

	while (i <= size) {
		if (text[i] >= 'A' && text[i] <= 'Z') {
			sol[j] = ' ';
			j++;
			sol[j] = text[i];
			j++;
			i++;
		}
		else {
			sol[j] = text[i];
			j++;
			i++;
		}
		if (i == size) {
			sol[j] = '\0'; // must delimit arr str
		}
	}
	printf("%s\n", sol);
	return sol;
}
