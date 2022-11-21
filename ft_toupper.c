/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 12:51:40 by syan              #+#    #+#             */
/*   Updated: 2022/11/11 13:01:32 by syan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_toupper('a'));
	printf("%d\n", ft_toupper('b'));
	printf("%d\n", ft_toupper('c'));
}*/
