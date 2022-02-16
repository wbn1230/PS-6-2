//00
#include <unistd.h>

void	ft_putchar(char c);

int	main(void)
{
	ft_putchar('m');
	return (0);
}


//01
#include <unistd.h>

void	ft_print_alphabet(void);

int	main(void)
{
	ft_print_alphabet();
	return (0);
}


//02
#include <unistd.h>

void	ft_print_reverse_alphabet(void);

int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}

//03
#include <unistd.h>

void	ft_print_numbers(void);

int	main(void)
{
	ft_print_numbers();
	return (0);
}

//04
#include <unistd.h>

void	ft_is_negative(int n);

int	main(void)
{
	ft_is_negative(42);
	write(1, "\n", 1);
	ft_is_negative(1);
	write(1, "\n", 1);
	ft_is_negative(0);
	write(1, "\n", 1);
	ft_is_negative(-24);
	write(1, "\n", 1);
	ft_is_negative(-124);
	write(1, "\n", 1);
	return (0);
}

//05
#include <unistd.h>

void	ft_print_comb(void);

int	main(void)
{
	ft_print_comb();
	return (0);
}

//06
#include <unistd.h>

void	ft_print_comb2(void);

int	main(void)
{
	ft_print_comb2();
	return (0);
}

//07

#include <stdio.h>

void	ft_putnbr(int nb);

int	main(void)
{
	ft_putnbr(4242);
	printf("\n");
	ft_putnbr(-2147483648);
	printf("\n");
	ft_putnbr(-123);
	printf("\n");
	ft_putnbr(0);
	printf("\n");
	ft_putnbr(123123);
	printf("\n");
	ft_putnbr(2147483647);
	return (0);
}
