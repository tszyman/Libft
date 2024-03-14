/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomek <tomek@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 22:19:43 by tomek             #+#    #+#             */
/*   Updated: 2024/03/14 20:44:44 by tomek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr);

int	ft_atoi(const char *nptr)
{
	char	*p;
	int		sign;
	int		nbr;

	p = (char *)nptr;
	nbr = 0;
	if (*p == '\0')
		return (0);
	sign = 1;
	while (*p == ' ' || *p == '\f' || *p == '\n' \
	|| *p == '\r' || *p == '\t' || *p == '\v')
	{
		p++;
	}
	if (*p == '-' || *p == '+')
	{
		if (*p == '-')
			sign = -1;
		p++;
	}
	while (*p >= '0' && *p <= '9')
	{
		nbr = nbr * 10 + (*p - 48);
		p++;
	}
	return (sign * nbr);
}
