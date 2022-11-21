/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:03:29 by syan              #+#    #+#             */
/*   Updated: 2022/11/14 13:25:10 by syan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	else
		return (0);
}

/*
int	main(void)
{
	printf("%d\n", ft_isalnum(1));
	printf("%d\n", ft_isalnum('a'));
	printf("%d\n", ft_isalnum('Z'));
	printf("%d\n", ft_isalnum('0'));
}
*/
