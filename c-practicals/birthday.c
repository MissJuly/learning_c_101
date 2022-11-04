#include <stdio.h>

/**
 * birthday_song - prints the birthday song
 * @song: the lyrics
 *
 * Return: void
 */
void birthday_song()
{
	int index;

	for (index = 0; index <= 3; index++)
	{
		if (index == 2)
		{
			printf("Happy birthday dear bestie.....\n");
		}
		else if (index == 3)
		{
			printf("Happy birthday to yooouuuu!!!!!\n");
		}
		else
		{
			printf("Happy birthday to you...\n");
		}
	}
	printf("\n");
}

/**
 * what_is_your_age - get age 
 *
 * Return: void
 *
void what_is_your_age()
{
	int counter;
*/	


/**
 * main - calls the birthday function
 *
 * Return: 0 Always success
 */
int main(void)
{
	char name[25];
	if (name = "Cecilia" || "CECILIA" || "cecilia")
	{
		printf("Please enter your name: ");
		scanf("%s", &name[25]);
		birthday_song();
		birthday_song();
		birthday_song();
	}
	else 
		printf("Invalid name!!");

	return (0);
}
