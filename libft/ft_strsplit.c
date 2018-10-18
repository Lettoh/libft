/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strsplit.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fleonard <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/02 15:03:56 by fleonard     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/08 12:29:44 by fleonard    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_strsplit_check(char const *s, char c)
{
	char	**tab;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	if ((tab = malloc(sizeof(char*) * (ft_count_words(s, c) + 1))) == NULL)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			k = 0;
			tab[j] = (char*)malloc(sizeof(char) * ft_word_len(s, i, c) + 1);
			while (s[i] != c && s[i] != '\0')
				tab[j][k++] = s[i++];
			tab[j][k++] = '\0';
			j++;
		}
	}
	tab[j] = NULL;
	return (tab);
}

char		**ft_strsplit(char const *s, char c)
{
	if (s != NULL && c != '\0')
	{
		return (ft_strsplit_check(s, c));
	}
	return (NULL);
}
