#include <unistd.h>
#include <string.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	size_t	i;

	i = 0;

	while	(str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}
