/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strmapi.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomek <tomek@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 00:57:19 by tomek             #+#    #+#             */
/*   Updated: 2024/03/15 01:15:24 by tomek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	iter(unsigned int i, char c)
{
	return (c + i);
}

int	main(void)
{
	char	*s;
	char	*s_orig = "1234";
	
	printf("***   ft_strmapi   ***\n");
	printf("String: %s\n", s_orig);
	s = ft_strmapi(s_orig, iter);
	printf("String after ft_strmapi: %s\n", s);
}
