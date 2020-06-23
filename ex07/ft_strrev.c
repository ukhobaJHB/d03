/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ukhoba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 08:31:00 by ukhoba            #+#    #+#             */
/*   Updated: 2020/06/23 08:31:44 by ukhoba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int	end;
	int	start;
	char	tmp;
	
	end = 0;

	while	(str[end] != '\0')
	{
		end++;
	}

	start = 0;

	while(start <= end - 1){

		tmp = *(str + start);
		str[start] = *(str + (end - 1));
		str[end] = tmp;

		start++;
		end--;
	}

	return str;
}
