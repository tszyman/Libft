/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomek <tomek@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 12:27:38 by tomek             #+#    #+#             */
/*   Updated: 2024/03/10 15:43:02 by tomek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c);

char	*ft_strrchr(const char *s, int c)
{
	char	*p;
	int		slen;

	slen = ft_strlen(s);
	p = (char *)s + slen;
	while ((char)c != *p)
	{
		if (p < s)
			return (0);
		p--;
	}
	return (p);
}
