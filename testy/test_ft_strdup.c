/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strdup.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomek <tomek@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 12:41:25 by tomek             #+#    #+#             */
/*   Updated: 2024/03/12 20:31:39 by tomek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	s[] = "Tomek";
	char	*ret;

	printf("***   ft_strdup   ***\n");
	ret = ft_strdup(s);
	printf("Original string: %s\n", s);
	printf("Duplicated string: %s\n", ret);
	printf("Length of original string: %ld\n", ft_strlen(s));
	printf("Length of duplicated string: %ld\n", ft_strlen(ret));
}