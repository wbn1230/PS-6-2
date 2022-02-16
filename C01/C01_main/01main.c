//00
#include <stdio.h>
#include <unistd.h>

void	ft_ft(int *nbr);

int	main(void)
{
	int	*nbr;
	int	num;

	nbr = &num;
	ft_ft(nbr);
	printf("%d\n", num);
	return (0);
}

//01
#include <stdio.h>
#include <unistd.h>

void	ft_ultimate_ft(int *********nbr);

int	main(void)
{
	int	*********nbr;
	int	********nbr2;
	int	*******nbr3;
	int	******nbr4;
	int	*****nbr5;
	int	****nbr6;
	int	***nbr7;
	int	**nbr8;
	int	*nbr9;
	int	num;

	nbr9 = &num;
	nbr8 = &nbr9;
	nbr7 = &nbr8;
	nbr6 = &nbr7;
	nbr5 = &nbr6;
	nbr4 = &nbr5;
	nbr3 = &nbr4;
	nbr2 = &nbr3;
	nbr = &nbr2;

	ft_ultimate_ft(nbr);
	printf("%d\n", num);
	return (0);
}

//02
#include <stdio.h>
#include <unistd.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	num1;
	int	num2;

	num1 = 42;
	num2 = 24;


	ft_swap(&num1, &num2);
	printf("%d, %d\n", num1, num2);
	return (0);
}


//03
#include <stdio.h>
#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	num1;
	int	num2;
	int	x;
	int	y;

	num1 = 42;
	num2 = 4;

	x = num1 / num2;
	y = num1 % num2;

	ft_div_mod(num1, num2, &x, &y);
	printf("%d\n", x);
	printf("%d\n", y);
	return (0);
}


//04
#include <stdio.h>
#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int num1;
	int num2;

	num1 = 42;
	num2 = 5;

	ft_ultimate_div_mod(&num1, &num2);
	printf("%d\n", num1);
	printf("%d\n", num2);

	return (0);
}

//05
#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str);

int	main(void)
{
	char	*s;

	s = "Hello, 42";
	ft_putstr(s);

	return (0);
}

//06
#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str);

int	main(void)
{
	char	*s;

	s = "Hello 42";
	printf("%d\n", ft_strlen(s));

	return (0);
}

//07
#include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int	tab[6] = {0, 1, 2, 3, 4, 5};
	int	size = 6;

	ft_rev_int_tab(tab, size);
	printf("%d, %d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]);

	return (0);
}

//08
#include <stdio.h>
#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int	tab[6] = {3, 10, 6, 2, 24, 9};
	int	size = 6;
	
	ft_sort_int_tab(tab, size);
	
	int i;

	i = 0;
	while (i < size)
	{
		if (i == size - 1) printf("%d", tab[i]);
		else printf("%d, ", tab[i]);
		i++;
	}
	return (0);
}
