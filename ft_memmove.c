/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 18:44:11 by shogura           #+#    #+#             */
/*   Updated: 2022/04/07 16:58:54 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*dst_cp;
	unsigned char	*src_cp;

	dst_cp = (unsigned char *)dst;
	src_cp = (unsigned char *)src;
	if (n == 0)
		return (dst);
	if (dst_cp > src_cp)
	{
		while (n-- > 0)
			dst_cp[n] = src_cp[n];
	}
	else
		ft_memcpy(dst, src, n);
	return (dst);
}

#include <stdio.h>
int main(void)
{
	char str[50] = "12345";
	char *dst = str + 3;
	char *src = str;
	printf("%s %s\n", dst, src);
	char *ret = ft_memcpy(dst, src, 5);
	printf("%s", ret);

	return 0;
}
