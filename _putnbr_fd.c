/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _putnbr_fd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhallad <mkhallad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 17:17:05 by mkhallad          #+#    #+#             */
/*   Updated: 2025/08/26 17:56:36 by mkhallad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putnbr_fd(int n, int fd)
{
    if (n == -2147483648)
        write(fd, "-2147483648", 11);

    else if (n < 0)
    {
        write(fd, "-", 1);
        n = -n;
        ft_putnbr_fd(n, fd);
    }
    else
    {
        if (n > 9)
        {
            ft_putnbr_fd(n / 10, fd);
            ft_putnbr_fd(n % 10, fd);
        }
        else
        {
        digit = n + 48;
        write (fd, &digit, 1);
        }
    }
}
