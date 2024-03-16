/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memmove.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tszymans <tszymans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 17:13:11 by tszymans          #+#    #+#             */
/*   Updated: 2024/03/16 15:28:14 by tszymans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main(void)
{
	char	str[] = "Tomek";
	char	dest[10];
	char	org_dest[10];
	char	*d;
	char	*d_o;

	// memcpy(org_dest, str, 6);

	// ft_memcpy(dest, str, 6);

	d = (char *)ft_memmove(dest, str, ft_strlen(str)+1);
	d_o = (char *)memmove(org_dest, str, ft_strlen(str)+1);
	printf("my: %s \n", d);
	printf("orig: %s \n", d_o);

	if (ft_strlen(d) == ft_strlen(d_o))
		printf("Test: OK \n");
	else
		printf("Test: NOK \n");
}
