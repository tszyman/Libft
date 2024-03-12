/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strnstr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomek <tomek@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 16:04:41 by tomek             #+#    #+#             */
/*   Updated: 2024/03/10 20:31:07 by tomek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_RESET   "\x1b[0m"

int	main(void)
{
	char		*ret;
	//int		ret_orig;
	char	*s1 = "Tomek is born to code!";
	char	*s2 = "code";
	size_t	n;

	n = 30;
	printf("***   ft_strnstr   ***\n");
	printf("s1: %s\n", s1);
	printf("s2: %s\n", s2);
	printf("Comparing %ld bytes.\n", n);
	ret = ft_strnstr(s1, s2, n);
	printf("return ft_strnstr: %s\n", ret);

}