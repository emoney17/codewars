/* In this example you have to validate if a user input string is alphanumeric.
 * The given string is not nil/null/NULL/None, so you don't have to check that.
 */

/* The string has the following conditions to be alphanumeric: */

/*     At least one character ("" is not valid) */
/*     Allowed characters are uppercase / lowercase latin letters and digits
 * from 0 to 9 */
/*     No whitespaces / underscore */

#include <stdbool.h>
#include <stdio.h>
#include <string.h>

bool alphanumeric(const char *str) {
	int size = strlen(str);
	printf("%s\n", str);
	if (strlen(str) == 0 || str == "") {
		return false;
		printf("false\n");
	}
	for (int i = 0; i < size; i++) {
		if (str[i] < '0' ||
			str[i] > '9' && str[i] < 'A' ||
			str[i] > 'Z' && str[i] < 'a' ||
			str[i] > 'z' ) {
			printf("false\n");
			return false;
		}
		else if (str[i] == '_' || str[i] == ' ') {
			printf("false\n");
			return false;
		}
	}
	printf("true\n");
	return true;
}
