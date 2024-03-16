/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_toupper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tszymans <tszymans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 16:04:41 by tomek             #+#    #+#             */
/*   Updated: 2024/03/16 15:37:37 by tszymans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_RESET   "\x1b[0m"

int	main(void)
{
	int	c = 'a';
	int	ret;
	int	ret_orig;

	printf("***   ft_toupper   ***\n");
	printf("Char before: %c\n", c);
	ret = ft_toupper(c);
	printf("Char after: %c\n", ret);

	printf("***   ft_toupper original   ***\n");
	printf("Char before: %c\n", c);
	ret_orig = toupper(c);
	printf("Char after: %c\n", ret);
	if (ret == ret_orig)
		printf(ANSI_COLOR_GREEN "OK!\n" ANSI_COLOR_RESET);
	else
		printf(ANSI_COLOR_RED "NOK!\n" ANSI_COLOR_RESET);
}
