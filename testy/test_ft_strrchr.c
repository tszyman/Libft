/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strrchr.c                                   :+:      :+:    :+:   */
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
	//char	s[] = "";
	char	*s = (char *)calloc(1,1);
	char	*ret;
	char	c;

	c = 'T';
	printf("***   ft_strchr   ***\n");
	printf("s: %s\n", s);
	ret = ft_strrchr(s, c);
	printf("return start pointer: %p\n", s);
	printf("return ft_strchr: %p\n", ret);
	printf("Position of the found letter: %ld\n", ret-s);

	printf("***   strchr original   ***\n");
	printf("s: %s\n", s);
	ret = strrchr(s, c);
	printf("return start pointer: %p\n", s);
	printf("return strchr: %p\n", ret);
	printf("Position of the found letter: %ld\n", ret-s);
}