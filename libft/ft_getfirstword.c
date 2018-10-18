/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_getfirstword.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fleonard <fleonard@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/18 12:51:19 by fleonard     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/18 13:11:44 by fleonard    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_getfirstword(const char *str)
{
	int		i;
	char	*res;
	int		len;
	int		pos;

	i = 0;
	len = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
	pos = i;
	while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
	{
		len++;
		i++;
	}
	res = ft_strsub(str, pos, len);
	return (res);
}
