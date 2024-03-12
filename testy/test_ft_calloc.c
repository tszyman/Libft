/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_calloc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomek <tomek@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 20:35:49 by tomek             #+#    #+#             */
/*   Updated: 2024/03/12 20:47:34 by tomek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_RESET   "\x1b[0m"

int	main(void)
{
	size_t	nmemb;
	size_t	size;
	char	*p;

	nmemb = 2147483647;
	size = 2;
	p = ft_calloc(nmemb, size);

	if (p == NULL)
	{
		printf(ANSI_COLOR_RED "Memory allocation failed!\n" ANSI_COLOR_RESET);
		free(p);
		return (0);
	}
	printf(ANSI_COLOR_GREEN "Memory allocated properly!\n" ANSI_COLOR_RESET);
	free(p);
	return (1);
}
