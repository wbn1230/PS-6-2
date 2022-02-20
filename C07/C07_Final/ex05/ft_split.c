#include <stdlib.h>

int	ft_is_charset(char *str, char c)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	**ft_split(char *str, char *charset)
{
	char	**wdarr;
	int	i;
	int	j;
	int	k;

	wdarr = (char **)malloc(sizeof(char) * 1000);
	i = 0;
	k = 0;
	while (str[i] != '\0')
	{
		if (ft_is_charset(charset, str[i]) == 1)
			i++;
		j = 0;
		while (ft_is_charset(charset, str[i]) == 0)
		{
			wdarr[k] = (char *)malloc(sizeof(char) * 1000);
			wdarr[k][j] = str[i];
			j++;
			i++;
		}
		wdarr[k][j] = '\0';
		i++;
		k++;
	}
	return (wdarr);
}
