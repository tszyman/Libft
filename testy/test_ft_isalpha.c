/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isalpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomek <tomek@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 17:15:37 by tomek             #+#    #+#             */
/*   Updated: 2024/03/03 20:25:27 by tomek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include "libft.h"

int	main(void)
{
	printf("********** ft_isalpha **********\n");
	printf("Original isalpha for 3: %d\n", isalpha(3));
	printf("My v. ft_isalpha for 3: %d\n", ft_isalpha(3));
	printf("Original isalpha for 50 (ASCII 2): %d\n", isalpha(50));
	printf("My v. ft_isalpha for 50 (ASCII 2): %d\n", ft_isalpha(50));
	printf("Original isalpha for 84 (ASCII 'T'): %d\n", isalpha(84));
	printf("My v. ft_isalpha for 84 (ASCII 'T'): %d\n", ft_isalpha(84));
	printf("Original isalpha for null : %d\n", isalpha(0));
	printf("My v. ft_isalpha for null : %d\n", ft_isalpha(0));
	
}
