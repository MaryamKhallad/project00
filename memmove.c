/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhallad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 17:15:32 by mkhallad          #+#    #+#             */
/*   Updated: 2025/08/21 17:15:58 by mkhallad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char	*c_src;
	char	*c_dest;
	size_t	i;

	if (!dest && !src)
		return (NULL);
	c_src = (char *) src;
	c_dest = (char *)dest;
	i = 0;
	if (c_dest > c_src)
		while (len-- > 0)
			c_dest[len] = c_src[len];
	else
	{
		while (i++ < len)
			c_dest[i] = c_src[i];
	}
	return (dest);
}
