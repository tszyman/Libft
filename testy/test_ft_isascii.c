/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isascii.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomek <tomek@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 17:15:37 by tomek             #+#    #+#             */
/*   Updated: 2024/03/03 20:54:30 by tomek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include "libft.h"

int	main(void)
{
	printf("********** ft_isascii **********\n");
	printf("Original isascii for -1: %d\n", isascii(-1));
	printf("My v. ft_isascii for -1: %d\n", ft_isascii(-1));
	printf("Original isascii for 0: %d\n", isascii(0));
	printf("My v. ft_isascii for 0: %d\n", ft_isascii(0));
	printf("Original isascii for 127: %d\n", isascii(127));
	printf("My v. ft_isascii for 127: %d\n", ft_isascii(127));
	printf("Original isascii for 128: %d\n", isascii(128));
	printf("My v. ft_isascii for 128: %d\n", ft_isascii(128));
	
}
