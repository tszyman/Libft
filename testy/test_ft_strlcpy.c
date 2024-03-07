/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlcpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomek <tomek@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 21:27:09 by tomek             #+#    #+#             */
/*   Updated: 2024/03/07 21:51:35 by tomek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	src[] = "coucou";
	char	dest[10];
	int		i;
	int		n;
	int		ret;

	i = 0;
	n = 2;
	memset(dest, 'A', 10);
	ret = ft_strlcpy(dest, src, n);
	printf("source: %s\n", src);
	printf("dest: %s\n", dest);
	while (i <= n)
	{
		printf("znak[%d]: %c, return: %d\n", i, dest[i], ret);
		i++;
	}
}