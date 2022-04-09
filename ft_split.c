/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 18:13:47 by shogura           #+#    #+#             */
/*   Updated: 2022/04/09 13:38:53 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	free_all(char **strs)
{
	while (*strs)
		free(*strs++);
	return ;
}

static size_t	count_num_str(char const *s, char deli)
{
	size_t	i;
	size_t	num_str;

	i = 0;
	num_str = 0;
	while (s[i])
	{
		if (s[i] != deli)
		{
			num_str++;
			while (s[i] && s[i] != deli)
				i++;
		}
		while (s[i] && s[i] == deli)
			i++;
	}
	return (num_str);
}

static size_t	word_count(char const *src, char deli)
{
	size_t	i;

	i = 0;
	while (src[i] && src[i] != deli)
		i++;
	return (i);
}

static char	**store_str(char **strs, char const *src, char deli)
{
	size_t	i;
	size_t	len;

	i = 0;
	while (*src)
	{
		src = ft_strchr_rev(src, deli);
		if (src == NULL)
			break ;
		len = word_count(src, deli);
		strs[i] = ft_calloc(len, sizeof(char));
		if (strs[i] == NULL)
		{
			free_all(strs);
			return (NULL);
		}
		ft_strlcpy(strs[i], src, len + 1);
		i++;
		src += len;
	}
	strs[i] = NULL;
	return (strs);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	size_t	num_str;

	if (s == NULL)
		return (NULL);
	num_str = count_num_str(s, c);
	strs = (char **)malloc(sizeof(char *) * (num_str + 1));
	if (strs == NULL)
		return (NULL);
	return (store_str(strs, s, c));
}
