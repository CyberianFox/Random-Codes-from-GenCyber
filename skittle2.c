#include <stdio.h>

int main()
{
	int Red, Yellow, Purple, Blue, Many;
	float cost;
	
	printf("How many red:");
	scanf("%d", &Red);

	printf("How many yellow:");
	scanf("%d", &Yellow);

	printf("How many Purple:");
	scanf("%d", &Purple);

	printf("How many Blue:");
	scanf("%d", &Blue);
	
	Many = Red + Yellow + Purple + Blue;

	printf("You have %d skittles, congrats, you can't do basic math.\n", Many);

	if(Many >= 25)
	{
		cost = Many * 0.17;
	}
	else
	{
		cost = Many * 0.19;
	}

	cost = Many * 0.19;
	cost = cost + (cost * 0.08);
	printf("Your bill will be %.2f today, thank you for your purchase.\n", cost);

	if (Many >= 20)
	{
		cost = cost - 2;
		printf("Wait! You have purchased 20 or more skittles, you have been awarded the 'Super Saver' deal! Your bill is now %.2f\n", cost);
	}

	return 0;
}