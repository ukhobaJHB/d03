#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	char	str[256];
	int	i;

	i = 0;

	while	(nbr >= 0)
	{
		
		str[i] = nbr % 10 + '0';


		i++;
		nbr /= 10;
	}

	while	(i >= 0)
	{
		ft_putchar(str[i]);
		i--;
	}
	ft_putchar('\n');
}

int	ft_atoi(char *str)
{
	int	i;
	int	itoa;

	i = 0;
	itoa = 0;
	while	(str[i])
	{
		if	((i == 0 && str[i] == '-') || (i == 0 && str[i] == '+'))
		{
			
		}

		if	(str[i] >= '0' && str[i] <= '9')
		{
			itoa *= 10;
			itoa += str[i] - '0';
		}

		i++;
	}

	return itoa;
}

int	main(void)
{
	char str[20] = "0";

	int val;

	val = atoi(str);
	ft_putnbr(val);
	ft_putchar('\n');
	ft_putnbr(ft_atoi(str));

	return 0;
}
