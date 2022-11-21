/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 14:06:13 by syan              #+#    #+#             */
/*   Updated: 2022/11/14 15:42:18 by syan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] && s1[i] == s2[i] && i < n - 1)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*
#include <stdio.h>

int	main(void)
{
	char	s1[] = "abcde";
	char	s2[] = "abcdf";
	int	i;

	i = 0;
	while (i < 10)
	{
		printf("%d\n", ft_strncmp(s1, s2, i));
		printf("%d\n", strncmp(s1, s2, i));
		printf("\n");
		i++;
	}
}
*/
