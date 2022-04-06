/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 20:27:40 by shogura           #+#    #+#             */
/*   Updated: 2022/04/06 20:30:09 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int				i;
	int				minus;
	unsigned long	num;

	i = 0;
	num = 0;
	minus = 1;
	while (('\t' <= str[i] && str[i] <= '\r') || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			minus = -1;
		i++;
	}
	while ('0' <= str[i] && str[i] <= '9')
	{
		num = 10 * num + (str[i] - '0');
		if (num > LONG_MAX && minus == 1)
			return (-1);
		else if (num > LONG_MAX && minus == -1)
			return (0);
		i++;
	}
	return ((int)num * minus);
}
