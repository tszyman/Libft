/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memcpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tszymans <tszymans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 17:13:11 by tszymans          #+#    #+#             */
/*   Updated: 2024/03/06 17:36:44 by tszymans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main(void)
{
	char str[] = "tomek";
	char dest[10];
	char org_dest[10];

	// memcpy(org_dest, str, 6);

	// ft_memcpy(dest, str, 6);

	printf("my: %s \n", (char *)ft_memcpy(dest, str, ft_strlen(str)+1));
	printf("orig: %s \n", (char *)memcpy(org_dest, str, ft_strlen(str)+1));

	if (*(char *)memcpy(org_dest, str, ft_strlen(str)+1) == *(char *)memcpy(dest, str, ft_strlen(str)+1))
		printf("Test: OK \n");
	else
		printf("Test: NOK \n");
}
