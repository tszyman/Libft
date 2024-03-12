/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomek <tomek@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 12:41:25 by tomek             #+#    #+#             */
/*   Updated: 2024/03/10 13:04:44 by tomek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	s[] = "Tomek";
	char	*ret;
	char	c;

	c = 'r';
	printf("***   ft_strchr   ***\n");
	printf("s: %s\n", s);
	ret = ft_strchr(s, c);
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