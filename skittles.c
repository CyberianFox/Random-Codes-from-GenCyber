#include <stdio.h>

int main()
{
	int Red, Yellow, Purple, Blue, Orange, Many;
	float cost;
	
	printf("How many red:");
	scanf("%d", &Red);

	printf("How many yellow:");
	scanf("%d", &Yellow);

	printf("How many Purple:");
	scanf("%d", &Purple);

	printf("How many Blue:");
	scanf("%d", &Blue);
	
	printf("How many Orange:");
	scanf("%d", &Orange);
	
	Many = Red + Yellow + Purple + Blue + Orange;

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
	printf("Anyway, your bill will be %.2f today. Thank you for your purchase.\n", cost);

	if (Many >= 20)
	{
		cost = cost - 2;
		printf("Wait! You have purchased 20 or more skittles, you have been awarded the 'Super Saver' deal! Your bill is now %.2f.\n", cost);
	}

	return 0;
}
