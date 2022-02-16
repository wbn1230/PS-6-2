//00
#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char str1[50] = "Empty message";
	char str2[50] = "Hello Seoul";
	printf("-----ex00-----\n");
	printf("\033[0;31m");
	printf("Before Copy\n");
	printf("\033[0m");
	printf("%s\n%s\n", str1, str2);
	char *str_cp = ft_strcpy(str1, str2);
	printf("Copied str : %s\n", str_cp);
	printf("\033[0;36m");
	printf("After Copy\n");
	printf("\033[0m");
	printf("%s\n%s\n", str1, str2);
}

//01
#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char str1[50] = "Empty Message";
	char str2[50] = "Hello Seoul";
	printf("-----ex01-----\n");
	printf("\033[0;31m");
	printf("Before Copy\n");
	printf("\033[0m");
	printf("%s\n%s\n", str1, str2);
	char *str_cp = ft_strncpy(str1, str2, 7);
	printf("Copied str : %s\n", str_cp); 
	printf("\033[0;36m");
	printf("After Copy\n");
	printf("\033[0m");
	printf("%s\n%s\n", str1, str2); 
}

//02
#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	char str1[50] = "abcklmxyzABCLMNXYZ";
	char str2[50] = "abyxABYX5";
	char str3[50] = "";
	char str4[50] = "abc?";
	printf("----ex02----\n");
	printf("%d, %d, %d, %d\n", ft_str_is_alpha(str1), ft_str_is_alpha(str2), ft_str_is_alpha(str3), ft_str_is_alpha(str4));
}

//03
#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	char str1[50] = "0123456789";
	char str2[50] = "123456abc";
	char str3[50] = "";
	char str4[50] = "123;";
	printf("----ex03----\n");
	printf("%d, %d, %d, %d\n", ft_str_is_numeric(str1), ft_str_is_numeric(str2), ft_str_is_numeric(str3), ft_str_is_numeric(str4));

	return (0);
}

//04
#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	char str1[50] = "abcdklmnxyz";
	char str2[50] = "abcXYZ";
	char str3[50] = "";
	char str4[50] = "abab!";
	printf("----ex04----\n");
	printf("%d, %d, %d, %d\n", ft_str_is_lowercase(str1), ft_str_is_lowercase(str2), ft_str_is_lowercase(str3), ft_str_is_lowercase(str4));

	return (0);
}

//05
#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	char str1[50] = "ADEDWXZY";
	char str2[50] = "AVVDDavav";
	char str3[50] = "";
	char str4[50] = "23ABCC";
	printf("----ex05----\n");
	printf("%d, %d, %d, %d\n", ft_str_is_uppercase(str1), ft_str_is_uppercase(str2), ft_str_is_uppercase(str3), ft_str_is_uppercase(str4));
	
	return (0);
}

//06
#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	char str1[50] = "h1 delas f;;'23?!~4";
	char str2[50] = "\n";
	char str3[50] = "";
	char str4[50] = {1, 2, 0};
	printf("----ex06----\n");
	printf("%d, %d, %d, %d\n", ft_str_is_printable(str1), ft_str_is_printable(str2), ft_str_is_printable(str3), ft_str_is_printable(str4));
	
	return (0);
}

//07
#include <stdio.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	char str1[50] = "1 as f;;'23?!~4";
	char str2[50] = "aanbBBDF1223NNASDFa";
	char str3[50] = "";
	char str4[50] = "123456789";
	printf("----ex07----\n");
	printf("\033[0;31m");
	printf("Before Change\n");
	printf("\033[0m");
	printf("%s\n%s\n%s\n%s\n", str1, str2, str3, str4);
	ft_strupcase(str1);
	ft_strupcase(str2);
	ft_strupcase(str3);
	ft_strupcase(str4);
	printf("\033[0;36m");
	printf("After Change\n");
	printf("\033[0m");
	printf("%s\n%s\n%s\n%s\n", str1, str2, str3, str4);
	return (0);
}

//08
#include <stdio.h>

char	*ft_strlowcase(char *str);

int	main(void)
{
	char str1[50] = "ABAV 1 or XKILWM;'23?!~4";
	char str2[50] = "aanbBBDF1223NNASDFa";
	char str3[50] = "";
	char str4[50] = "AA123456789aa";
	printf("----ex08----\n");
	printf("\033[0;31m");
	printf("Before Change\n");
	printf("\033[0m");
	printf("%s\n%s\n%s\n%s\n", str1, str2, str3, str4);
	ft_strlowcase(str1);
	ft_strlowcase(str2);
	ft_strlowcase(str3);
	ft_strlowcase(str4);
	printf("\033[0;36m");
	printf("After Change\n");
	printf("\033[0m");
	printf("%s\n%s\n%s\n%s\n", str1, str2, str3, str4);
	return (0);
}

//09
#include <stdio.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char str1[100] = "salut, comment tu vas ? 42mots quet-des; cinqu+et+un";
	char str2[100] = "";
	char str3[100] = "HellO, I AM wonbpark. ????is gOOD FOR ;;42's 42HELLO";
	printf("----ex09----\n");
	printf("\033[0;31m");
	printf("Before Change\n");
	printf("\033[0m");
	printf("%s\n%s\n%s\n", str1, str2, str3);
	ft_strcapitalize(str1);
	ft_strcapitalize(str2);
	ft_strcapitalize(str3);
	printf("\n");
	printf("\033[0;36m");
	printf("After Change\n");
	printf("\033[0m");
	printf("%s\n%s\n%s\n", str1, str2, str3);
}

//10
#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char str1[100] = "salut, i am a student of 42 seoul and i study for C";
	char str2[100] = "Well, do you try to pass the exam?";
	char str3[100] = "Hi Guys Welcome to the cluster";
	printf("----ex10----\n");
	printf("Before Change\n%s\n%s\n%s\n", str1, str2, str3);
	//printf("Copied len : %u\n", ft_strlcpy(str1, str2, (unsigned int)100));
	//printf("After Change\n%s\n%s\n%s\n", str1, str2, str3);
	//printf("Copied len : %u\n", ft_strlcpy(str1, str2, (unsigned int)1));
	//printf("After Change\n%s\n%s\n%s\n", str1, str2, str3);
	printf("Copied len : %u\n", ft_strlcpy(str1, str3, (unsigned int)10));
	printf("After Change\n%s\n%s\n%s\n", str1, str2, str3);
}

//11
#include <stdio.h>

void	ft_putstr_non_printable(char *str);

int	main(void)
{
		char str1[100] = "Cooucou\ntu vas bien ?";
		char str2[10] = {1, 2, 3, -1, -2, -3};
		printf("----ex11----\n");
		printf("Before Change\nstr1 : \n%s\nc : %s\n", str1, str2);
		ft_putstr_non_printable(str1);
		printf("\n");
		ft_putstr_non_printable(str2);
		printf("\n");
}
