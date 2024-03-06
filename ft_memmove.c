/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tszymans <tszymans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 20:57:50 by tomek             #+#    #+#             */
/*   Updated: 2024/03/06 18:07:09 by tszymans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n);

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dst;
	unsigned char	*source;
	char	sign;
	size_t	i;

	if (!dest && !src)
		return (0);
	dst = (unsigned char *)(dest);
	source = (unsigned char *)(src);
	if (dest > src)
	{
		sign = -1;
		dst = (unsigned char *)(dest + n - 1);
		source = (unsigned char *)(src + n - 1);
	}
	i = 0;
	while (i < n)
	{
		*dst = *source;
		dst += sign;
		source += sign;
		i++;
	}
	return (dest);
}
