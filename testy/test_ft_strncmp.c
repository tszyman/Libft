/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strncmp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tszymans <tszymans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 16:04:41 by tomek             #+#    #+#             */
/*   Updated: 2024/03/13 18:00:39 by tszymans         ###   ########.fr       */
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
	char	*s1 = "ABC";
	char	*s2 = "AB";
	size_t	n;

	n = 3;
	printf("***   ft_strncmp   ***\n");
	printf("s1: %s\n", s1);
	printf("s2: %s\n", s2);
	printf("Comparing %ld bytes.\n", n);
	ret = ft_strncmp(s1, s2, n);
	printf("return ft_strncmp: %d\n", ret);

	printf("***   strncmp original   ***\n");
	printf("s1: %s\n", s1);
	printf("s2: %s\n", s2);
	printf("Comparing %ld bytes.\n", n);
	ret_orig = strncmp(s1, s2, n);
	printf("return strnmcp: %d\n", ret_orig);
	if (ret == ret_orig)
		printf(ANSI_COLOR_GREEN "OK!\n" ANSI_COLOR_RESET);
	else
		printf(ANSI_COLOR_RED "NOK!\n" ANSI_COLOR_RESET);
}
