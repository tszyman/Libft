/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memcmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomek <tomek@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 16:04:41 by tomek             #+#    #+#             */
/*   Updated: 2024/03/10 18:06:11 by tomek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_RESET   "\x1b[0m"

int	main(void)
{
	int		ret;
	int		ret_orig;
	char	s1[] = {-128, 0, 127, 0};
	char	s2[] = {-128, 0, 127, 0};
	size_t	n;

	//char	s4[] = {0, 0, 42, 0};
	//char	s2[] = {0, 0, 127, 0};
	n = 4;
	printf("***   ft_memcmp   ***\n");
	printf("Comparing %ld bytes.\n", n);
	ret = ft_memcmp(s2, s1, n);
	printf("return ft_memcmp: %d\n", ret);
	printf("***   memcmp original   ***\n");
	printf("Comparing %ld bytes.\n", n);
	ret_orig = memcmp(s2, s1, n);
	printf("return memcmp: %d\n", ret_orig);
	if (ret == ret_orig)
		printf(ANSI_COLOR_GREEN "OK!\n" ANSI_COLOR_RESET);
	else
		printf(ANSI_COLOR_RED "NOK!\n" ANSI_COLOR_RESET);
}
