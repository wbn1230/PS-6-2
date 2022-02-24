#include <stdio.h>
#include <stdlib.h>

//00
void	ft_foreach(int *tab, int length, void(*f)(int));

void print_int(int a)
{
	printf("%d ",a);
}

int main()
{
		printf("--ex00--\n");
		int arr[10] = {1, 2, 9, 8, 3, 4, 6, 5, 0, 0};
		for(int i=0;i<10;i++)
			printf("%d ", arr[i]);
		printf(": ");
		ft_foreach(arr, 10, &print_int);
		printf("\n");
}

//01
#include <stdio.h>
#include <stdlib.h>

int	*ft_map(int *tab, int length, int(*f)(int));

int	plus_3(int a)
{
	return (a + 3);
}

int	main(void)
{
		printf("\n--ex01--\n");
		int arr[10] = {1, 2, 9, 8, 3, 4, 6, 5, 0, 4};
		for(int i=0;i<10;i++)
			printf("%d ", arr[i]);
		printf(": ");
		int *return_arr = ft_map(arr, 10, &plus_3);
		for(int i=0;i<10;i++)
			printf("%d ", return_arr[i]);
		free(return_arr);
		printf("\n");
}

//02
#include <stdio.h>

int	ft_any(char **tab, int(*f)(char*));

int	only_digit(char *str)
{
	while (*str)
	{
		if (!('0' <= *str && *str <= '9'))
			return (0);
		str++;
	}
	return (1);
}

int	main(void)
	{
		printf("\n--ex02--\n");
		char *strs[5];
		strs[0] = " 01823948\t";
		strs[1] = "abeemkdAS";
		strs[2] = "102984";
		strs[3] = "123asf";
		strs[4] = 0;
		printf("1 : %d\n", ft_any(strs, &only_digit));
		strs[2] = "[]po[]";
		printf("0 : %d\n", ft_any(strs, &only_digit));
	}

//03
#include <stdio.h>

int	ft_count_if(char **tab, int length, int (*f)(char*));

int	only_digit(char *str)
{
	while (*str)
	{
		if (!('0' <= *str && *str <= '9'))
			return (0);
		str++;
	}
	return (1);
}

int main(void)
	{
		printf("\n--ex03--\n");
		char *strs[5];
		strs[0] = " 01823948\t";
		strs[1] = "abeemkdAS";
		strs[2] = "102984";
		strs[3] = "123";
		strs[4] = "12annbkm12";
		printf("2 : %d\n", ft_count_if(strs, 5,  &only_digit));
		strs[2] = "[]po[]";
		printf("1 : %d\n", ft_count_if(strs, 5, &only_digit));
	}

//04
#include <stdio.h>

int	ft_is_sort(int *tab, int length, int(*f)(int, int));

int return_min(int a, int b)
{
	return (a - b);
}

int	main(void)
{
		printf("\n--ex04--\n");
		int arr1[10] = {1, 2, 9, 8, 3, 4, 6, 5, 10, 11};
		for(int i=0;i<10;i++)
			printf("%d ", arr1[i]);
		printf(": %d\n", ft_is_sort(arr1, 10, &return_min));
		int arr2[10] = {-10, 2, 2, 2, 5, 6, 7, 8, 10, 112};
		for(int i=0;i<10;i++)
			printf("%d ", arr2[i]);
		printf(": %d\n", ft_is_sort(arr2, 10, &return_min));
		int arr3[10] = {11, 9, 6, 3, 1, 0, -1, -13, -14, -15};
		for(int i=0;i<10;i++)
			printf("%d ", arr3[i]);
		printf(": %d\n", ft_is_sort(arr3, 10, &return_min));
		int arr4[1] = {111};
			printf("%d ", arr4[0]);
		printf(": %d\n", ft_is_sort(arr4, 1, &return_min));
	}

//06
#include <stdio.h>

void	ft_sort_string_tab(char **tab);

int	main(void)
{
		printf("\n--ex06--\n");
		char *strs[8];
		strs[0] = "3s!!ZSDFAA~~mlkjs11";
		strs[1] = "ASss";
		strs[2] = "~9~~mlkjsyou";
		strs[3] = "!!09~~mlkjsyou";
		strs[4] = "mlAABkjs";
		strs[5] = "";
		strs[6] = "A z ~ ~";
		strs[7] = 0;
		printf("\nBefore sort\n");
		for(int i=0;i<7;i++)
			printf("%s\n",strs[i]);
		ft_sort_string_tab(strs);
		printf("\nAfter sort\n");
		for(int i=0;i<7;i++)
			printf("%s\n",strs[i]);
}

//07
#include <stdio.h>

void	ft_advanced_sort_string_tab(char **tab, int(*cmp)(char *, char *));

int decending_cmp(char *str1, char *str2)
{
	while (*str1 && *str2)
	{
		if (*str1 != *str2)
			break;
		str1++;
		str2++;
	}
	return (*str1 - *str2);
}

int main(void)
{
		printf("\n--ex07--\n");
		char *strs[8];
		strs[0] = "3s!!ZSDFAA~~mlkjs11";
		strs[1] = "ASss";
		strs[2] = "~9~~mlkjsyou";
		strs[3] = "!!09~~mlkjsyou";
		strs[4] = "mlAABkjs";
		strs[5] = "";
		strs[6] = "A z ~ ~";
		strs[7] = 0;
		printf("\nBefore sort\n");
		for(int i=0;i<7;i++)
			printf("%s\n",strs[i]);
		ft_advanced_sort_string_tab(strs, &decending_cmp);
		printf("\nAfter sort\n");
		for(int i=0;i<7;i++)
			printf("%s\n",strs[i]);
}
