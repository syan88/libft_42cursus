/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 15:54:37 by syan              #+#    #+#             */
/*   Updated: 2022/11/14 16:44:06 by syan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	s1len;
	char	*res;

	if (!s1 || !set)
		return (NULL);
	while (ft_strchr(set, *s1) && *s1)
		s1++;
	s1len = ft_strlen((char *)s1);
	while (ft_strchr(set, s1[s1len]) && s1len)
		s1len--;
	res = ft_substr((char *)s1, 0, s1len + 1);
	if (!res)
		return (NULL);
	return (res);
}

/*
#include <stdio.h>

int	main(void)
{
	char const *s1 = "            ";
	char const *set = " ";

	printf("%s\n", ft_strtrim(s1, set));
}
*/
