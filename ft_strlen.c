/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomek <tomek@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 21:03:54 by tomek             #+#    #+#             */
/*   Updated: 2024/03/07 21:13:21 by tomek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(const char *str);

int	ft_strlen(const char *str)
{
	int	strlen;

	strlen = 0;
	if (*str == '\0')
		return (0);
	while (*str != '\0')
	{
		str += 1;
		strlen += 1;
	}
	return (strlen);
}
