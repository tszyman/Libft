/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomek <tomek@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 21:34:37 by tomek             #+#    #+#             */
/*   Updated: 2024/03/10 22:07:09 by tomek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <limits.h>
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_RESET   "\x1b[0m"

int	main(void)
{
	int		ret;
	int		ret_orig;
	//char	*s1 = "1";
	//char	*s1 = "a1";
	//char	*s1 = "--1";
	//char	*s1 = "++1";
	//char	*s1 = "+1";
	//char	*s1 = "-1";
	//char	*s1 = "0";
	//char	*s1 = "+42Warsaw";
	char	*s1 = "+101";
	 //char	*s1 = "2148473647";
	// char	*s11 = "-2148473646";
	// char	*s12 = "-+42";
	// char	*s13 = "+-42";
	// char	*s14 = "+ 42";
	// char	*s15 = "- 42";
	// char	*s16 = "1 42";
	// char	*s17 = "-1 42";

	printf("***   ft_atoi   ***\n");
	printf("Atoi from: %s\n", s1);
	ret = ft_atoi(s1);
	printf("return ft_atoi: %d\n", ret);
	printf("***   atoi original   ***\n");
	printf("Atoi from: %s\n", s1);
	ret_orig = atoi(s1);
	printf("return atoi: %d\n", ret_orig);
	if (ret == ret_orig)
		printf(ANSI_COLOR_GREEN "OK!\n" ANSI_COLOR_RESET);
	else
		printf(ANSI_COLOR_RED "NOK!\n" ANSI_COLOR_RESET);
}