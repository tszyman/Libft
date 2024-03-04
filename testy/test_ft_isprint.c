/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isprint.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomek <tomek@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 17:15:37 by tomek             #+#    #+#             */
/*   Updated: 2024/03/04 12:05:29 by tszymans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include "libft.h"

int	main(void)
{
	printf("********** ft_isprint **********\n");
	printf("Original isprint for 3: %d\n", isprint(3));
	printf("My v. ft_isprint for 3: %d\n", ft_isprint(3));
	printf("Original isprint for 50 (ASCII 2): %d\n", isprint(50));
	printf("My v. ft_isprint for 50 (ASCII 2): %d\n", ft_isprint(50));
	printf("Original isprint for 84 (ASCII 'T'): %d\n", isprint(84));
	printf("My v. ft_isprint for 84 (ASCII 'T'): %d\n", ft_isprint(84));
	printf("Original isprint for 32 (ASCII 'space'): %d\n", isprint(32));
	printf("My v. ft_isprint for 32 (ASCII 'space'): %d\n", ft_isprint(32));
	printf("Original isprint for null : %d\n", isprint(0));
	printf("My v. ft_isprint for null : %d\n", ft_isprint(0));
}
