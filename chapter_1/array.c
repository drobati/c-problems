// Derek Robati
// June 8th, 2012
//
//
// Modified file to complete exercise in book.
// 1-13. Write a program to print a histogram
// of the lengths of chars in its input.
// Vertical orientation was suppose to be
// more "challenging".
#include <stdio.h>

main()
{
	int c, i, nwhite, nother;
	int ndigit[10];

	int vheight = 0;

	nwhite = nother = 0;
	for (i = 0; i < 10; ++i)
		ndigit[i] = 0;

	while ((c = getchar()) != EOF)
		if (c >= '0' && c <= '9')
			++ndigit[c-'0'];
		else if (c == ' ' || c == '\n' || c == '\t')
			++nwhite;
		else
			++nother;

	vheight = nother; //saves some time for a future comparison.
	for (i = 0; i < 10; ++i)
		if (ndigit[i] > vheight)
			vheight = ndigit[i];
	if (nwhite > vheight)
		vheight = nwhite;
	printf("\n\n");
	while (vheight >= 0) {
		printf("%d ", vheight);
		for (i = 0; i < 10; ++i)
			if (ndigit[i] >= vheight)
				printf("| ");
			else
				printf("  ");
		if (nwhite >= vheight)
			printf("| ");
		else
			printf("  ");
		if (nother >= vheight)
			printf("| ");
		else
			printf("  ");
		--vheight;
		printf("\n");
	}
	printf("  0 1 2 3 4 5 6 7 8 9 W O\n");
}
