//00
#include <stdio.h>

int	ft_strlen(char *str);

int main()
{
		char *str1 = "42Stdheader this len will be = 33";
		char str2[15] = {0,};
		char str3[15] = {-1, -2, 0, 1, 0,};
		printf("----ex00----\n");
		printf("33, 0, 2 : %d, %d, %d\n", ft_strlen(str1), ft_strlen(str2), ft_strlen(str3));
}

//01
#include <stdio.h>

void	ft_putstr(char *str);

int	main(void)
{
		char *str1 = "Hello Thanks for using this testcase";
		char str2[15] = {0,};
		printf("----ex1----\n");
		printf("%s : \n", str1);
		ft_putstr(str1);
		printf("\n");
		printf("[NO PRINT] : \n");
		ft_putstr(str2);
		printf("\n");
}

//02
#include <stdio.h>

void	ft_putnbr(int nb);

int	main(void)
{
		printf("----ex02----\n");
		printf("0 : \n");
		ft_putnbr(-0);
		printf("\n");
		printf("2147483647 : \n");
		ft_putnbr(2147483647);
		printf("\n");
		printf("-2147483648 : \n");
		ft_putnbr(-2147483648);
		printf("\n");
		printf("-4242 : \n");
		ft_putnbr(-4242);
		printf("\n");
		printf("123456789 : \n");
		ft_putnbr(123456789);
		printf("\n");
	}

//03
#include <stdio.h>

int	ft_atoi(char *str);

int	main(void)
{
		printf("----ex03----\n");
		char *str1 = "    ---+--+1234ab567";
		char *str2 = "  \n \ta-123a";
		char *str3 = " \v  ++2147483647";
		char *str4 = " \f  -----+-+001458 24567";
		char *str5 = "\r  \n -+-++-+2147483648";
		printf("%s : %d\n", str1, ft_atoi(str1));
		printf("%s : %d\n", str2, ft_atoi(str2));
		printf("%s : %d\n", str3, ft_atoi(str3));
		printf("%s : %d\n", str4, ft_atoi(str4));
		printf("%s : %d\n", str5, ft_atoi(str5));
}

//04
#include <stdio.h>

void	ft_putnbr_base(int nbr, char *base);

int main()
{
		printf("----ex04----\n");
		printf("8867\n");
		ft_putnbr_base(1132, "9876543210");
		printf("\n");
		printf("[SHOULD NOT PRINT]\n");
		ft_putnbr_base(1132, "");
		printf("\n");
		printf("[SHOULD NOT PRINT]\n");
		ft_putnbr_base(1132, "aabc!");
		printf("\n");
		printf("-bDBbFjci\n");
		ft_putnbr_base(-2147483648, "abcdefghijABCDEFGHIJ"); // 20base
		printf("\n");
		printf("*///////\n");
		ft_putnbr_base(2147483647, "!@#$%^&*()<>,.?/"); // 16base
		printf("\n");
		printf("-@@#!\n");
		ft_putnbr_base(-42, "!@#"); // 3base
		printf("\n");
		printf("101010\n");
		ft_putnbr_base(42, "01"); // 2base
}

//05
#include <stdio.h>

int	ft_atoi_base(char *str, char *base);

int main()
{
		printf("----ex05----\n");
		char *str1 = "   ---+--+AABCDESSEZ";
		char *str2 = "  \n \ta-a";
		char *str3 = " \v  ++2147483647";
		char *str4 = " \f  -----+-+!!@@#..<";
		char *str5 = "\r  \n -+-++-+2147483648";
		printf("-67174\n");
		printf("%d\n", ft_atoi_base(str1, "ABCDES")); // 6base
		printf("\n");
		printf("-1\n");
		printf("%d\n", ft_atoi_base(str1, "ABZ")); 	
		printf("\n");
		printf("0\n");
		printf("%d\n", ft_atoi_base(str3, "A-+")); // +- include
		printf("\n");
		printf("0\n");
		printf("%d\n", ft_atoi_base(str1, "")); // 0base
		printf("\n");
		printf("-2147483648\n");
		printf("%d\n", ft_atoi_base(str5, "0123456789")); // 10base
		printf("\n");
		printf("2\n");
		printf("%d\n", ft_atoi_base(str2, "cba")); // 3base
		printf("\n");
		printf("1126397\n");
		printf("%d\n", ft_atoi_base(str4, "!@#$%^&*()~?><'.")); // 16base
		printf("\n");
}
