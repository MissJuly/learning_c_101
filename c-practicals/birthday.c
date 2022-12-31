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
 */
void what_is_your_age()
{
	int counter, age;

	for (counter = 0; counter <= 1; counter++)
	{
		for (age = 0; age <= 1; age++)
		{
			printf("How old are you now??  ");
			scanf("%d", &age);
		}
	}

	printf("\nHappy birthday dear bestie......\n");
	printf("Happy birthday to you!!!!\n");
}
	


/**
 * main - calls the birthday function
 *
 * Return: 0 Always success
 */
int main(void)
{
	/*char name[25]; strcmp("cecilia", "CECILIA") == 0
	if (name = "Cecilia" || "CECILIA" || "cecilia")*/
	
	/*char name[8];

	printf("Please enter your name: ");
	scanf("%s", &name[25]);
	if (name == "Cecilia")*/
	{
		birthday_song();
		birthday_song();
		birthday_song();

		what_is_your_age();	
	}

	/*else 
		printf("Invalid name!!");*/

	return (0);
}
