/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strnstr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fleonard <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/05 11:38:49 by fleonard     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/05 11:39:19 by fleonard    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		j;
	size_t		n;

	i = 0;
	j = 0;
	n = ft_strlen(needle);
	if (n == 0)
		return ((char*)haystack);
	while (haystack[i] && len-- >= n)
	{
		while (needle[j] == haystack[i + j])
		{
			if (j == n - 1)
				return ((char*)haystack + i);
			j++;
		}
		j = 0;
		i++;
	}
	return (NULL);
}
