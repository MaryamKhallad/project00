/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhallad <mkhallad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 15:13:25 by mkhallad          #+#    #+#             */
/*   Updated: 2025/08/28 18:23:45 by mkhallad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	slen;
	size_t	finish;

	if (!s)
		return (0);
	slen = ft_strlen(s);
	finish = 0;
	if (start < slen)
		finish = slen - start;
	if (finish > len)
		finish = len;
	new = (char *)malloc(sizeof(char) * (finish + 1));
	if (!new)
		return (0);
	ft_strlcpy(new, s + start, finish + 1);
	return (new);
}
// int main (void)
// {
// 	char *str = "hello, world";
// 	char *sub;
// 	sub = ft_substr(str, 7, 5);

// 	printf("substring: %s\n", sub);
// 	free(sub);

// 	sub = ft_substr(str, 0, 5);
// 	printf("substring: %s\n", sub);
// 	free(sub);

// 	sub = ft_substr(str, 20, 5);
// 	printf("substring: %s\n", sub);
// 	free(sub);
// 	return 0;
// }