/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_itoa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomek <tomek@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 23:01:09 by tomek             #+#    #+#             */
/*   Updated: 2024/03/14 23:30:30 by tomek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	main(void)
{
	int		n;
	char	*ret;

	n = -1;
	printf("***   ft_itoa   ***\n");
	printf("Integer: %d\n", n);
	ret = ft_itoa(n);
	printf("String after ft_itoa: %s\n", ret);
}
