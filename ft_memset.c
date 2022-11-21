/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:08:39 by syan              #+#    #+#             */
/*   Updated: 2022/11/07 14:29:53 by syan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*p;

	p = (char *)s;
	i = 0;
	while (i < n)
	{
		p[i] = c;
		i++;
	}
	return (s);
}

/*int	main(void)
{
	char	buf1[10] = "abcde";
	char	buf2[10] = "abcde";

	printf("%s\n", (char *)ft_memset(buf1, 'z', 3));
	printf("%s\n", (char *)memset(buf2, 'z', 3));
}*/
