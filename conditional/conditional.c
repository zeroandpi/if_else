#include <stdio.h>

int main(void) {

	const int TWO = 2;

	printf("Two == 2 return %d\n\n", TWO == 2);
	printf("TWO <= 1 return %d\n\n", TWO <= 1);

	if (TWO == 2)
		printf("TWO equals 2\n\n");

	if (TWO <= 1)
		printf("TWO is less than or equal to 1\n\n");
	else
		printf("Two is greater than 1\n\n");

	if (TWO != 3 && TWO > 1)
		printf("Two is NOT equal to 3 and TWO greater than 1\n\n");
	else
		printf("Two equals 3 or TWO is less than or equal to 1\n\n");


	return 0;
}
