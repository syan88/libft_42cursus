/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 13:11:12 by syan              #+#    #+#             */
/*   Updated: 2022/11/21 13:17:33 by syan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*buffer;
	size_t	max;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	max = SIZE_MAX / nmemb;
	if (size > max)
		return (NULL);
	buffer = malloc(size * nmemb);
	if (!buffer)
		return (NULL);
	ft_bzero(buffer, size * nmemb);
	return (buffer);
}
