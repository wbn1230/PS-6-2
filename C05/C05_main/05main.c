//00
#include <stdio.h>

int	ft_iterative_factorial(int nb);

int	main(void)
{
	printf("----ex00----\n");
	printf("5! : %d\n", ft_iterative_factorial(5));
	printf("4! : %d\n", ft_iterative_factorial(4));
	printf("3! : %d\n", ft_iterative_factorial(3));
	printf("2! : %d\n", ft_iterative_factorial(2));
	printf("1! : %d\n", ft_iterative_factorial(1));
	printf("0! : %d\n", ft_iterative_factorial(0));
	printf("-1! : %d\n", ft_iterative_factorial(-1));
	printf("100! : %d\n", ft_iterative_factorial(100));

	return (0);
}

//01
#include <stdio.h>

int	ft_recursive_factorial(int nb);

int	main(void)
{
	printf("----ex01----\n");
	printf("5! : %d\n", ft_recursive_factorial(5));
	printf("4! : %d\n", ft_recursive_factorial(4));
	printf("3! : %d\n", ft_recursive_factorial(3));
	printf("2! : %d\n", ft_recursive_factorial(2));
	printf("1! : %d\n", ft_recursive_factorial(1));
	printf("0! : %d\n", ft_recursive_factorial(0));
	printf("-1! : %d\n", ft_recursive_factorial(-1));
	printf("15! : %d\n", ft_recursive_factorial(15));
	printf("100! : %d\n", ft_recursive_factorial(100));
	
	return (0);
}

//02
#include <stdio.h>

int	ft_iterative_power(int nb, int power);


int	main(void)
{
	printf("----ex02----\n");
	printf("2^1 : %d\n", ft_iterative_power(2, 1));
	printf("2^3 : %d\n", ft_iterative_power(2, 3));
	printf("3^4 : %d\n", ft_iterative_power(3, 4));
	printf("2^0 : %d\n", ft_iterative_power(2, 0));
	printf("0^2 : %d\n", ft_iterative_power(0, 2));
	printf("0^0 : %d\n", ft_iterative_power(0, 0));
	printf("-2^1 : %d\n", ft_iterative_power(-2, 1));
	printf("-4^2 : %d\n", ft_iterative_power(-4, 2));
	printf("-5^3 : %d\n", ft_iterative_power(-5, 3));
	printf("5^-1 : %d\n", ft_iterative_power(5, -1));
}

//03
#include <stdio.h>

int	ft_recursive_power(int nb, int power);

int	main(void)
{
	printf("----ex03----\n");
	printf("2^1 : %d\n", ft_recursive_power(2, 1));
	printf("2^3 : %d\n", ft_recursive_power(2, 3));
	printf("3^4 : %d\n", ft_recursive_power(3, 4));
	printf("1^0 : %d\n", ft_recursive_power(1, 0));
	printf("0^1 : %d\n", ft_recursive_power(0, 1));
	printf("0^0 : %d\n", ft_recursive_power(0, 0));
	printf("-2^1 : %d\n", ft_recursive_power(-2, 1));
	printf("-4^2 : %d\n", ft_recursive_power(-4, 2));
	printf("-5^3 : %d\n", ft_recursive_power(-5, 3));
	printf("5^-1 : %d\n", ft_recursive_power(5, -1));
}

//04
#include <stdio.h>

int	ft_fibonacci(int index);

int	main(void)
{
	printf("----ex04----\n");
	printf("-1 : %d\n", ft_fibonacci(-4));
	printf("0 : %d\n", ft_fibonacci(0));
	printf("1 : %d\n", ft_fibonacci(1));
	printf("2 : %d\n", ft_fibonacci(2));
	printf("3 : %d\n", ft_fibonacci(3));
	printf("4 : %d\n", ft_fibonacci(4));
	printf("5 : %d\n", ft_fibonacci(5));
	printf("6 : %d\n", ft_fibonacci(6));
	printf("7 : %d\n", ft_fibonacci(7));
	printf("8 : %d\n", ft_fibonacci(8));
}

//05
#include <stdio.h>

int	ft_sqrt(int nb);

int	main(void)
{
	printf("----ex05----\n");
	printf("-1 : %d\n", ft_sqrt(-1));
	printf("0 : %d\n", ft_sqrt(0));
	printf("1 : %d\n", ft_sqrt(1));
	printf("4 : %d\n", ft_sqrt(4));
	printf("36 : %d\n", ft_sqrt(36));
	printf("49 : %d\n", ft_sqrt(49));
	printf("64 : %d\n", ft_sqrt(64));
	printf("81 : %d\n", ft_sqrt(81));
	printf("99 : %d\n", ft_sqrt(99));
	printf("120 : %d\n", ft_sqrt(120));
	printf("144 : %d\n", ft_sqrt(144));
	printf("2147395600 : %d\n", ft_sqrt(2147395600));

}

//06
#include <stdio.h>
#include <time.h>

int	ft_is_prime(int nb);

int	main(void)
{
	double time_spent = 0.0;
	clock_t begin = clock();
	printf("----ex06----\n");
	printf("-1 : %d\n", ft_is_prime(-1));
	printf("0 : %d\n", ft_is_prime(0));
	printf("1 : %d\n", ft_is_prime(1));
	printf("4 : %d\n", ft_is_prime(4));
	printf("7 : %d\n", ft_is_prime(7));
	printf("11 : %d\n", ft_is_prime(11));
	printf("12 : %d\n", ft_is_prime(12));
	printf("41 : %d\n", ft_is_prime(41));
	printf("234 : %d\n", ft_is_prime(234));
	printf("2147483647 : %d\n", ft_is_prime(2147483647));
	clock_t end = clock();
	time_spent += (double)(end - begin) / CLOCKS_PER_SEC;	
	printf("The elapsed time is %f seconds", time_spent);
}

//07
#include <stdio.h>

int	ft_find_next_prime(int nb);

int	main(void)
{
	printf("----ex07----\n");
	printf("-123 : %d\n", ft_find_next_prime(-123));
	printf("0 : %d\n", ft_find_next_prime(0));
	printf("6 : %d\n", ft_find_next_prime(6));
	printf("11 : %d\n", ft_find_next_prime(11));
	printf("26 : %d\n", ft_find_next_prime(26));
	printf("31 : %d\n", ft_find_next_prime(31));
	printf("98 : %d\n", ft_find_next_prime(98));
	printf("228371 : %d\n", ft_find_next_prime(228371));
	printf("349203 : %d\n", ft_find_next_prime(349203));
	printf("2147483640 : %d\n", ft_find_next_prime(2147483640));

}

//08
#include <stdio.h>

int	ft_ten_queens_puzzle(void);

int	main(void)
{
	printf("----ex08----\n");
	int answer = ft_ten_queens_puzzle();
	printf("724 : %d\n",answer);
}
