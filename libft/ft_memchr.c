/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 19:24:56 by raalonso          #+#    #+#             */
/*   Updated: 2023/11/08 18:47:32 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	ch;
	size_t			i;

	i = 0;
	str = (unsigned char *)s;
	ch = (unsigned char)c;
	while (i < n)
	{
		if (str[i] == ch)
			return ((void *)s + i);
		i++;
	}
	return (0);
}
