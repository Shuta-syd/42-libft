/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_rev.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 19:58:52 by shogura           #+#    #+#             */
/*   Updated: 2022/04/08 10:57:53 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr_rev(const char *s, int c)
{
	unsigned char	*str;
	unsigned char	charset;

	str = (unsigned char *)s;
	charset = (unsigned char)c;
	while (*str)
	{
		if (*str != charset)
			return ((char *)str);
		str++;
	}
	if (c == 0)
		return ((char *)str);
	return (NULL);
}