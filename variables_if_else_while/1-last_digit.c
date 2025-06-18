#include
#include
#include

/*
* main - Prints the last digit of a random number and its category
*
* Description: This program assigns a random number to n, extracts its
* last digit, and prints whether it is greater than 5, equal to 0, or
* less than 6 and not 0. The output format is: "Last digit of [n] is
* [last_digit] and is [condition]".
*
* Return: Always 0 (success)
*/
int main(void)
{
	int n; /* Variable to store random number */
	int last_digit; /* Variable to store last digit of n */
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10; /* Extract last digit */

	printf("Last digit of %d is %d and is ", n, last_digit);
	if (last_digit > 5) /* Check if last digit is greater than 5 */
	{
		printf("greater than 5\n");
	}
	else if (last_digit == 0) /* Check if last digit is 0 */
	{
		printf("0\n");
	}
	else /* Last digit is less than 6 and not 0 */
	{
		printf("less than 6 and not 0\n");
	}
	
	return (0);
}
