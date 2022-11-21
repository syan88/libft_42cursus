/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 13:38:01 by syan              #+#    #+#             */
/*   Updated: 2022/11/17 15:00:19 by syan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	slen;

	slen = ft_strlen(s);
	while (slen >= 0)
	{
		if (((unsigned char *)s)[slen] == (unsigned char)c)
			return ((char *)s + slen);
		slen--;
	}
	return (NULL);
}

/*
#include <stdio.h>

int	main(void)
{
	char	buf[50] = "abcdefghcba";

	printf("%s\n", ft_strrchr(buf, 99));
	printf("%s\n", strrchr(buf, 99));
}
*/
