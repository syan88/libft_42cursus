/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:37:58 by syan              #+#    #+#             */
/*   Updated: 2022/11/07 12:56:36 by syan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

/*
int	main(void)
{
	printf("%d\n", ft_isalpha(-1));
	printf("%d\n", ft_isalpha(10));
	printf("%d\n", ft_isalpha(70));
	printf("%d\n", ft_isalpha(95));
	printf("%d\n", ft_isalpha(110));
	printf("%d\n", ft_isalpha(125));
}*/
