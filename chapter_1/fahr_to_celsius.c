// Derek Robati
// June 5, 2012
//
#include <stdio.h>

/* print Fahrenheit-Celsius table
 * for fahr= 0, 20, ..., 300 */

float fahr_to_celsius(float fahr)
{
	return ((5.0/9.0) * (fahr-32.0));
}

float celsius_to_fahr(float celsius)
{
	return (celsius / (5.0/9.0) + 32);
}

main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0; /* lower limit of temperature table */
	upper = 300; /* upper limit */
	step = 20; /* step size */

	fahr = lower;
	printf("Fahren\tCelsius\n");
	while (fahr <= upper) {
		celsius = fahr_to_celsius(fahr);
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
	printf("\n");

	celsius = lower;
	printf("Celsius\tFahren\n");
	while (celsius <= upper) {
		fahr = celsius_to_fahr(celsius);
		printf("%3.0f %6.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
	printf("\n");
	return 0;
}
