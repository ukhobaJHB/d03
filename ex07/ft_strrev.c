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
