/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 14:04:27 by syan              #+#    #+#             */
/*   Updated: 2022/11/17 17:04:23 by syan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*res;

	if (!s)
		return (NULL);
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (s[start + i] && i < len && start < ft_strlen((char *)s))
	{
		res[i] = s[start + i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%s\n", ft_substr("abcdefg hijk lmn", 3, 5));
}
*/
