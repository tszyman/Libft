/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_substr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tszymans <tszymans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 18:03:39 by tszymans          #+#    #+#             */
/*   Updated: 2024/03/13 18:10:49 by tszymans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char			s[] = "Tomek is born to code!";
	char			*ret;
	unsigned int	start;
	size_t			len;

	start = 6;
	len = 7;
	printf("***   ft_substr   ***\n");
	ret = ft_substr(s, start, len);
	printf("Original string: %s\n", s);
	printf("Length of original string: %ld\n", ft_strlen(s));
	printf("Cutting %zu chars from index %d \n", len, start);
	printf("Substring: %s\n", ret);
	printf("Length of duplicated string: %ld\n", ft_strlen(ret));
}
