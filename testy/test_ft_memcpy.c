/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memcpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tszymans <tszymans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 17:13:11 by tszymans          #+#    #+#             */
/*   Updated: 2024/03/16 15:27:03 by tszymans         ###   ########.fr       */
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

	d = (char *)ft_memcpy(dest, str, ft_strlen(str)+1);
	d_o = (char *)memcpy(org_dest, str, ft_strlen(str)+1);
	printf("my: %s \n", d);
	printf("orig: %s \n", d_o);

	if (ft_strlen(d) == ft_strlen(d_o))
		printf("Test: OK \n");
	else
		printf("Test: NOK \n");
}
