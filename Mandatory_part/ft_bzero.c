/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 18:39:08 by shogura           #+#    #+#             */
/*   Updated: 2022/04/06 20:37:37 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *b, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)b;
	while (i < len)
		str[i++] = '\0';
	return ;
}
