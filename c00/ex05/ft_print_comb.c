// This exercise is done after the Piscine.
// It might use functions that are not allowed in the Piscine.
// It is also not checked by Moulinette.

#include <stdio.h>

void	ft_print_comb(void)
{
	int	firstdigit;
	int	seconddigit;
	int	thirddigit;

	firstdigit = 0;
	while (firstdigit < 8)
	{
		seconddigit = firstdigit + 1;
		while (seconddigit < 9)
		{
			thirddigit = seconddigit + 1;
			while (thirddigit < 10)
			{
				printf("%d%d%d, ", firstdigit, seconddigit, thirddigit);
				thirddigit++;
			}
			seconddigit++;
		}
		firstdigit++;
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
