/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_striteri.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomek <tomek@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 00:57:19 by tomek             #+#    #+#             */
/*   Updated: 2024/03/15 01:01:32 by tomek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	iter(unsigned int i, char *s)
{
	*s += i;
}

int	main(void)
{
	char	s[]="000000000";

	printf("***   ft_striteri   ***\n");
	printf("String: %s\n", s);
	ft_striteri(s, iter);
	printf("String after ft_striteri: %s\n", s);
}
