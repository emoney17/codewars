/* The goal of this exercise is to convert a string to a new string where each character in the new string is "(" if that character appears only once in the original string, or ")" if that character appears more than once in the original string. Ignore capitalization when determining if a character is a duplicate. */
/* Examples */

/* "din"      =>  "(((" */
/* "recede"   =>  "()()()" */
/* "Success"  =>  ")())())" */
/* "(( @"     =>  "))(("  */

/* Notes */

/* Assertion messages may be unclear about what they display in some languages. If you read "...It Should encode XXX", the "XXX" is the expected result, not the input! */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * DuplicateEncoder(const char * s)
{
	int size = strlen(s);
	int c = 0;
	/* allocate memory to return */
	char * ans = calloc(size + 1, sizeof(char)); 

	/* printf("%d", size); */
	for (int i = 0; i < size; i++) {
		/* printf("%c = ", s[i]); */
		for (int j = 0; j < size; j++) {
			if (s[i] == s[j]
				|| (s[i] >= 'A' && s[i] <= 'Z' && s[i] + 32 == s[j])
				|| (s[i] >= 'a' && s[i] <= 'z' && s[i] - 32 == s[j])) {
				c++;
			}
		}
		if (c > 1) {
			ans[i] = ')';
		} else {
			ans[i] = '(';
		}
		/* printf("%d\n", c); */
		c = 0;
	}
	/* printf("%s", ans); */
	return ans;
}
