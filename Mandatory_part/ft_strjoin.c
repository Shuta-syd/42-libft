/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 20:40:43 by shogura           #+#    #+#             */
/*   Updated: 2022/04/06 20:42:10 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_s;
	size_t	len;
	int		i;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	i = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	new_s = (char *)malloc(sizeof(char) * (len + 1));
	if (new_s == NULL)
		return (NULL);
	ft_bzero(new_s, len + 1);
	ft_strcat(new_s, s1);
	ft_strcat(new_s, s2);
	return (new_s);
}
