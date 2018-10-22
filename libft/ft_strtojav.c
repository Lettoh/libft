/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strtojav.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fleonard <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/22 13:17:24 by fleonard     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/22 15:25:54 by fleonard    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_isvowel(char c)
{
	if (c == 'a' || c == 'A' || c == 'e' || c == 'E'
		|| c == 'i' || c == 'I' || c == 'o' || c == 'O'
		|| c == 'u' || c == 'U' || c == 'y' || c == 'Y')
		return (1);
	return (0);
}

static int	ft_countjowel(char *str)
{
	int	i;
	int count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (ft_isvowel(str[i]))
			count++;
		i++;
	}
	return (count);
}

char		*ft_strtojav(char *str)
{
	int		i;
	char	*res;
	int		j;

	res = (char*)malloc(sizeof(char) * ft_strlen(str) 
			+ (ft_countjowel(str) * 2) + 1);
	i = 0;
	j = 0;
	while (str[j] != '\0')
	{
		if (!(ft_isvowel(str[j])))
		{
			res[i] = str[j];
			i++;
		}
		else if (ft_isvowel(str[i]) && !(ft_isvowel(str[i])))
		{
			res[i] = 'a';
			i++;
			res[i] = 'v';
			i++;
			res[i] = str[j];
			i++;
		}
		else
		{
			res[i] = 'a';
			i++;
			res[i] = 'v';
			i++;
			res[i] = str[j];
			i++;
			j++;
			res[i] = str[j];
			i++;
		}
		j++;
	}
	res[i] = '\0';
	return (res);
}

int	main(int argc, char **argv)
{
	argc = 2;
	printf("%s\n", ft_strtojav(argv[1]));
	return (0);
}
