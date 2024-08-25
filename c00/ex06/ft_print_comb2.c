// This exercise is done after the Piscine.
// It might use functions that are not allowed in the Piscine.
// It is also not checked by Moulinette.
// I am not 100% sure of the instructions, so this might not be the correct solution.

#include <stdio.h>

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i < 99)
	{
		j = i + 1;
		while (j <= 99)
		{
			if (i < 10 && j >= 10)
				printf("0%d %d, ", i, j);
			else if (i >= 10 && j < 10)
				printf("%d 0%d, ", i, j);
			else if (i < 10 && j < 10)
				printf("0%d 0%d, ", i, j);
			else
				printf("%d %d, ", i, j);
			j++;
		}
		i++;
	}
}

int	main(void)
{
	ft_print_comb2();
}
