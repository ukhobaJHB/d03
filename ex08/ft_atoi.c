/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ukhoba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 11:40:38 by ukhoba            #+#    #+#             */
/*   Updated: 2020/06/23 11:40:52 by ukhoba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int		i;
	int		is_neg;
	int		itoa;

	i = 0;
	is_neg = 1;
	itoa = 0;
	while	(str[i])
	{
		if	((i == 0 && str[i] == '-'))
		{
			is_neg = -1;	
		}

		if	(str[i] >= '0' && str[i] <= '9')
		{
			itoa *= 10;
			itoa += str[i] - '0';
		}
		else{
			str[i + 1] = '\0';
		}

		i++;
	}

	return itoa * is_neg;
}
