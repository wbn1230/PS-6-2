#include <stdlib.h>
#include <stdio.h>

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

char	*ft_strdup(char *str)
{
	int	i;
	int	j;
	char	*dest;

	i = 0;
	while (str[i] != '\0')
		i++;
	dest = (char *)malloc(sizeof(char) * i + 1);
	if (!dest)
		return (0);
	j = 0;
	while (str[j] != '\0')
	{
		dest[j] = str[j];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

char	**return_str(char *str, char **wdarr)
{
	wdarr[0] = ft_strdup(str);
	wdarr[1] = 0;
	return (wdarr);
}

char	**split_str(char *str, char **wdarr, char *charset)
{
	int	i;
	int	j;
	int	k;
	
	if (charset[0] == '\0')
		return (return_str(str, wdarr));
	i = 0;
	k = 0;
	if (ft_is_charset(charset, str[i]) == 1)
		i++;
	while (str[i] != '\0')
	{
		if (ft_is_charset(charset, str[i]) == 0)
		{
			j = 0;
			wdarr[k] = (char *)malloc(sizeof(char) * 1000);
			while (ft_is_charset(charset, str[i]) == 0)
				wdarr[k++][j] = str[i++];
			wdarr[k++][j] = '\0';
		}
		else
			i++;
	}
	wdarr[k] = 0;
	return (wdarr);
}

char	**ft_split(char *str, char *charset)
{
	char	**wdarr;

	wdarr = (char **)malloc(sizeof(char) * 1000);
	return (split_str(str, wdarr, charset));
}
