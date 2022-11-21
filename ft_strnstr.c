/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:29:15 by syan              #+#    #+#             */
/*   Updated: 2022/11/17 15:34:44 by syan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (!ft_strlen(little))
		return ((char *)big);
	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && i + j < len && little[j] != '\0')
			j++;
		if (little[j] == '\0')
			return ((char *)big + i);
		i++;
	}
	return (NULL);
}

/*
#include <stdio.h>
#include <bsd/string.h>

int	main(void)
{
	const char *largestring = "";
    const char *smallstring = "";

	printf("%s\n", strnstr(largestring, smallstring, 0));
	printf("%s\n", ft_strnstr(largestring, smallstring, 0));
}
*/
