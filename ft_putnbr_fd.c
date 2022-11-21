/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 13:31:33 by syan              #+#    #+#             */
/*   Updated: 2022/11/14 13:46:51 by syan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		nb = -nb;
		ft_putchar_fd('-', fd);
	}
	if (nb > 9)
	{
		ft_putnbr_fd((int)(nb / 10), fd);
		nb %= 10;
	}
	ft_putchar_fd(nb % 10 + '0', fd);
}

/*
int	main(void)
{
	ft_putnbr_fd(2147483647, 1);	
	ft_putnbr_fd(-2147483648, 1);	
}
*/
