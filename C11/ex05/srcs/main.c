#include <stdio.h>
#include <unistd.h>
#include "../includes/do_op.h"

int	calculate(int a, char o, int b)
{
	int	res;
	int	(*calculate[5])(int, int);

	calculate[0] = &op_add;
	calculate[1] = &op_sub;
	calculate[2] = &op_mult;
	calculate[3] = &op_div;
	calculate[4] = &op_mod;

	res = 1;
	if (o == '+')
		res = calculate[0](a, b);
	else if (o == '-')
		res = calculate[1](a, b);
	else if (o == '*')
		res = calculate[2](a, b);
	else if (o == '/')
		res = calculate[3](a, b);
	else if (o == '%')
		res = calculate[4](a, b);
	return (res);
}

void	do_op(char *r, char o, char *l)
{
	int	i;
	int	a;
	int	b;
	int	res;

	i = 0;
	res = 1;
	a = ft_atoi(r);
	b = ft_atoi(l);

	if (!(o == '+' || o == '-' || o == '*' || o == '/' || o == '%'))
		write (1, "0\n", 2);
	else if (o == '/' && b == 0)
		write(1, "Stop : division by zero\n", 24);
	else if (o == '%' && b == 0)
		write(1, "Stop : modulo by zero\n", 22);
	else
	{
		ft_putnbr(calculate(a, o ,b));
		write(1, "\n", 1);
	}
}

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		if (argv[2][1] != '\0')
			write(1, "0\n", 2);
		else
			do_op(argv[1], argv[2][0], argv[3]);
	}
	return 0;
}
	



