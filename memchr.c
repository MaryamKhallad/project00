/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhallad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 17:36:06 by mkhallad          #+#    #+#             */
/*   Updated: 2025/08/22 18:06:39 by mkhallad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char*) s;
	i = 0;
	while (i < n)
	{
		if ( str[i] == (unsigned char)c)
			return ((void*)&str[i]);
		i++;
	}
	return (NULL);
}
