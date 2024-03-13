/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strjoin.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tszymans <tszymans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 18:03:39 by tszymans          #+#    #+#             */
/*   Updated: 2024/03/13 18:32:23 by tszymans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char			s1[] = "Tomek";
	char			s2[] = " Szymanski";
	char			*ret;

	printf("***   ft_strjoin   ***\n");
	printf("Original string1: %s\n", s1);
	printf("Original string2: %s\n", s2);
	printf("Length of original string1: %ld\n", ft_strlen(s1));
	printf("Length of original string2: %ld\n", ft_strlen(s2));
	ret = ft_strjoin(s1, s2);
	printf("Joined string: %s\n", ret);
	printf("Length of joined string: %ld\n", ft_strlen(ret));
}
