/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomek <tomek@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 12:41:25 by tomek             #+#    #+#             */
/*   Updated: 2024/03/12 18:54:14 by tomek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	s[] = "Tomek";
	char	*ret;
	char	c;
	size_t	n;

	c = 'm';
	n = 3;
	printf("***   ft_strchr   ***\n");
	printf("s: %s\n", s);
	ret = ft_memchr(s, c, n);
	printf("return start pointer: %p\n", s);
	printf("return ft_strchr: %p\n", ret);
	printf("Position of the found letter: %ld\n", ret-s);

	printf("***   strchr original   ***\n");
	printf("s: %s\n", s);
	ret = strchr(s, c);
	printf("return start pointer: %p\n", s);
	printf("return ft_strchr: %p\n", ret);
	printf("Position of the found letter: %ld\n", ret-s);
}