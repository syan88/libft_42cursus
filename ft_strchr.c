/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 13:06:52 by syan              #+#    #+#             */
/*   Updated: 2022/11/17 14:47:16 by syan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if ((unsigned char)*s == (unsigned char)c)
			return ((char *)s);
		s++;
	}
	if (c == 0)
		return ((char *)s);
	return (NULL);
}

/*
#include <stdio.h>

int	main(void)
{
	char	buf[50] = "tripouille";
	int	c = ('t' + 256);

	printf("%c\n", c);
	printf("%s\n", ft_strchr(buf, c));
	printf("%s\n", strchr(buf, c));
}
*/
