/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 20:01:09 by shogura           #+#    #+#             */
/*   Updated: 2022/04/06 22:29:44 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	*str;
	unsigned char	charset;
	unsigned char	*tmp;

	tmp = NULL;
	str = (unsigned char *)s;
	charset = (unsigned char)c;
	while (*str)
	{
		if (*str == charset)
			tmp = str;
		str++;
	}
	if (tmp)
		return ((char *)tmp);
	else if (c == 0)
		return ((char *)str);
	return (NULL);
}
