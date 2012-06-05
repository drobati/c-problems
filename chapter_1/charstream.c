// Derek Robati
// June 5, 2012
// Section 1.5
//
#include <stdio.h>

main()
{
	int c, whitespace;

	whitespace = 0;
	while ((c = getchar()) != EOF)
		if (c == '\n' || c == ' ' || c == '\t')
			++whitespace;
	printf("\n%d\n", whitespace);
}
