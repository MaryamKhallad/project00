/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstsize.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhallad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 19:22:42 by mkhallad          #+#    #+#             */
/*   Updated: 2025/08/25 19:28:43 by mkhallad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;
	t_list	*node;

	node = lst;
	count = 0;
	while (node != '\0')
	{
		count++;
		node = node->next;
	}
	return (count);
}
