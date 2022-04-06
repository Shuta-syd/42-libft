/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 20:13:58 by shogura           #+#    #+#             */
/*   Updated: 2022/04/06 20:27:16 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_check_len(char const *s1, char const *s2, size_t n)
{
	int		i;
	int		j;
	size_t	len;

	i = 0;
	j = 0;
	len = 0;
	while (s1[i] && s2[j] && s1[i] == s2[j] && n-- > 0)
	{
		i++;
		j++;
		len++;
	}
	return (len);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	char	*hs;
	size_t	i;
	size_t	size;
	size_t	len;

	hs = (char *)haystack;
	if (n == 0)
		return ((char *)haystack);
	while (*hs && n > 0)
	{
		size = n;
		i = 0;
		if (*haystack == needle[0])
			len = ft_check_len(haystack, needle, size);
		if (len == ft_strlen(needle))
			return ((char *)haystack);
		haystack++;
		n--;
	}
	return (NULL);
}
