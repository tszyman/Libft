/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_tolower.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tszymans <tszymans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 16:04:41 by tomek             #+#    #+#             */
/*   Updated: 2024/03/16 15:36:25 by tszymans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_RESET   "\x1b[0m"

int	main(void)
{
	int	c = 'A';
	int	ret;
	int	ret_orig;

	printf("***   ft_tolower   ***\n");
	printf("Char before: %c\n", c);
	ret = ft_tolower(c);
	printf("Char after: %c\n", ret);

	printf("***   ft_tolower original   ***\n");
	printf("Char before: %c\n", c);
	ret_orig = tolower(c);
	printf("Char after: %c\n", ret);
	if (ret == ret_orig)
		printf(ANSI_COLOR_GREEN "OK!\n" ANSI_COLOR_RESET);
	else
		printf(ANSI_COLOR_RED "NOK!\n" ANSI_COLOR_RESET);
}
