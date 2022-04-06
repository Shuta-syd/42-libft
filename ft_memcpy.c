/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 18:40:48 by shogura           #+#    #+#             */
/*   Updated: 2022/04/06 21:23:41 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dst_cp;
	unsigned char	*src_cp;

	if (dst == src)
		return (dst);
	dst_cp = (unsigned char *)dst;
	src_cp = (unsigned char *)src;
	while (n-- > 0)
		*dst_cp++ = *src_cp++;
	return (dst);
}