void	ft_ultimate_div_mod(int *a, int *b)
{
	int	A;

	A = *a;
	*a = A / *b;
	*b = A % *b;
}
