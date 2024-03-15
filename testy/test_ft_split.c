/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_split.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomek <tomek@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 18:03:39 by tszymans          #+#    #+#             */
/*   Updated: 2024/03/15 17:53:42 by tomek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	freetab(char **tab)
{
	for (int i = 0; tab[i] != NULL; ++i)
		free(tab[i]);
	free(tab);
}


int	main(void)
{
//	char	s[] = "  Tomek  is   born  to    code!   ";
	char	s[] = "  Tomek   ";
	int		i;
	char **ret = ft_split(s, ' ');

	i = 0;

	printf("***   ft_split   ***\n");
	printf("Original string: %s\n", s);
	while (ret[i] != NULL)
	{
		printf("Substring[%d]: %s\n", i, ret[i]);
		i++;
	}
	printf("Elements: %d\n", i);
	freetab(ret);
}
