/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlcat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomek <tomek@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 21:27:09 by tomek             #+#    #+#             */
/*   Updated: 2024/03/10 12:23:19 by tomek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	src[] = "AAAAAAAAA";
	char	dest[30];
	int		n;
	int		ret;

	n = 20;
	memset(dest, 0, 30);
	memset(dest, 'C', 15);
	printf("***   ft_strlcat   ***\n");
	printf("source: %s\n", src);
	printf("dest: %s\n", dest);
	ret = ft_strlcat(dest, src, n);
	printf("dest after ft_strlcat: %s\n", dest);
	printf("ft_strlcat return: %d\n", ret);

	printf("***   strlcat original   ***\n");
	memset(dest, 0, 30);
	memset(dest, 'C', 15);
	printf("source: %s\n", src);
	printf("dest: %s\n", dest);
	ret = strlcat(dest, src, n);
	printf("dest after strlcat: %s\n", dest);
	printf("strlcat return: %d\n", ret);
}