// Derek Robati
// June 7th, 2012
//
#include <stdio.h>

#define IN 1	/* inside a word */
#define OUT 0	/* outside a word */

/* count lines, words, and characters in input */
main()
{
	int c, state;

	state = OUT;
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t') {
			printf("\n");
			state = OUT;
		}
		else if (state == OUT) {
			state = IN;
		}
		if (state == IN)
			printf("%c", c);
	}
}
