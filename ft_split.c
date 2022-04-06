/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 21:05:30 by shogura           #+#    #+#             */
/*   Updated: 2022/04/06 21:06:32 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_charcheck(char charset, char s)
{
	if (s == charset || s == '\0')
		return (1);
	return (0);
}

static int	ft_count_str(char const *s, char c)
{
	int	i;
	int	str_len;

	i = 0;
	str_len = 0;
	while (s[i] != '\0')
	{
		if (ft_charcheck(c, s[i]) == 0 && ft_charcheck(c, s[i + 1]) == 1)
			str_len++;
		i++;
	}
	return (str_len);
}

static char	**ft_memsecure(char **strs, char const *src, char c)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	j = 0;
	while (src[i] != '\0')
	{
		len = 0;
		if (ft_charcheck(c, src[i]) == 1)
			i++;
		else
		{
			while (ft_charcheck(c, src[i + len]) == 0)
				len++;
			strs[j] = (char *)malloc(sizeof(char) * (len + 1));
			ft_strncpy(strs[j], &src[i], len);
			i += len;
			j++;
		}
	}
	return (strs);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	int		str_len;

	if (s == NULL)
		return (NULL);
	str_len = ft_count_str(s, c);
	strs = (char **)malloc(sizeof(char *) * (str_len + 1));
	if (str_len == 0)
	{
		strs[0] = (char *)malloc(sizeof(char) * 1);
		strs[0] = "";
	}
	else
	{
		strs[str_len] = 0;
		strs = ft_memsecure(strs, s, c);
	}
	return (strs);
}
