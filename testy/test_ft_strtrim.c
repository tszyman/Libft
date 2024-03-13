/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strtrim.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tszymans <tszymans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 18:03:39 by tszymans          #+#    #+#             */
/*   Updated: 2024/03/13 20:22:45 by tszymans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char			s1[] = "ccccaaaTomekaaaccc";
	char			set[] = "ca";
	char			*ret;

	printf("***   ft_strtrim   ***\n");
	printf("Original s1: %s\n", s1);
	printf("Original set: %s\n", set);
	printf("Length of original string1: %ld\n", ft_strlen(s1));
	printf("Length of original string2: %ld\n", ft_strlen(set));
	ret = ft_strtrim(s1, set);
	printf("Trimmed string: %s\n", ret);
	printf("Length of trimmed string: %ld\n", ft_strlen(ret));
}
