#include <stdio.h>
#include <string.h>

//00
int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	{
		char str1[500] = "Hello World!";
		char str2[500] = "Hello Seoul?!";

		printf("----ex00----\n");
		printf("Strings are : \n");
		printf("%s\n%s\n",str1, str2);
		printf("strcmp : %d\n", strcmp(str1, str2));
		printf("ft_strcmp : %d\n", ft_strcmp(str1, str2));
	}
}

//01
#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
		char str1[500] = "Hello World!";
		char str2[500] = "Hello Seoul 42";
		printf("----ex01----\n");
		printf("Strings are : \n");
		printf("%s\n%s\n",str1, str2);
		printf("strncmp : %d / ft_strncmp : %d\n", strncmp(str1, str2, 8), ft_strncmp(str1, str2, 8));
		printf("strncmp : %d / ft_strncmp : %d\n", strncmp(str1, str2, 0), ft_strncmp(str1, str2, 0));
		printf("strncmp : %d / ft_strncmp : %d\n", strncmp(str1, str2, 5), ft_strncmp(str1, str2, 5));
		printf("strncmp : %d / ft_strncmp : %d\n", strncmp(str1, str2, 30), ft_strncmp(str1, str2, 30));
}

//02
#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
		char str1[500] = "Hello World! ";
		char str2[500] = "It is nice to see ya";
		printf("----ex02----\n");
		printf("Strings are : \n");
		printf("%s\n%s\n",str1, str2);
		printf("\n");
		printf("strcat: %s\n", strcat(str1, str2) );
		printf("(After cat)\n");
		printf("%s\n%s\n", str1, str2);	
		printf("\n");
		printf("----mytest----\n");
		char str3[500] = "Hello World! ";
		char str4[500] = "It is nice to see ya";
		printf("ft_strcat : %s\n", ft_strcat(str3, str4) );
		printf("(After cat)\n");
		printf("%s\n%s\n", str3, str4);
}

//03
#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
		char str1[500] = "Hello World! ";
		char str2[500] = "It is nice to see ya";
		printf("----ex02----\n");
		printf("Strings are : \n");
		printf("%s\n%s\n",str1, str2);
		printf("\n");
		printf("strncat : %s\n", strncat(str1, str2, 5) );
		printf("(After cat)\n");
		printf("%s\n%s\n", str1, str2);	
		printf("\n");
		printf("----mytest----\n");
		char str3[500] = "Hello World! ";
		char str4[500] = "It is nice to see ya";
		printf("ft_strncat : %s\n", ft_strncat(str3, str4, 5));
		printf("(After cat)\n");
		printf("%s\n%s\n", str3, str4);
}

//04
#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char str1[500] = "Hello My name is wonpark is my name.. Nice to meet you ";
	char str2[500] = "wonpark";
	char str3[500] = "My name is happy";
	char str4[100] = "";
	printf("----ex04----\n");
	printf("strings are :\n1. %s\n2. %s\n3. %s\n4. %s\n", str1, str2, str3, str4);
	printf("\n");
	printf("---strstr test---\n");
	printf("Find str 1, 2 : %s\n", strstr(str1, str2));
	printf("Find str 1, 3 : %s\n", strstr(str1, str3));
	printf("Find str 2, 3 : %s\n", strstr(str2, str3));
	printf("Find str 1, 4 : %s\n", strstr(str1, str4));
	printf("\n");
	printf("----mytest----\n");
	printf("Find str 1, 2 : %s\n", ft_strstr(str1, str2));
	printf("Find str 1, 3 : %s\n", ft_strstr(str1, str3));
	printf("Find str 2, 3 : %s\n", ft_strstr(str2, str3));
	printf("Find str 1, 4 : %s\n", ft_strstr(str1, str4));
}

//05
#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
		char str1[100] = "strlcat!";
		char str2[100] = "But I don't like cat...";

		printf("----ex05----\n");
		printf("strings are :\n%s (%lu)\n",str1, strlen(str1));
		printf("%s (%lu)\n",str2, strlen(str2));
		printf("\n");
		printf("----strlcat test----\n");
		printf("return value : %lu\n", strlcat(str1, str2, 15) );
		printf("%s\n%s\n", str1, str2);
		printf("(After cat)\n");
		printf("%s\n%s\n", str1, str2);
		char	str3[100] = "strlcat!";
		char	str4[100] = "But I don't like cat...";
		printf("\n");
		printf("------mytest------\n");
		printf("return value : %u\n", ft_strlcat(str3, str4, 15) );
		printf("(After cat)\n");
		printf("%s\n%s\n", str3, str4);
}
